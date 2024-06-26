/*
 *    Authors: Mohamed Khaled & Mohamed Elsayed
 *    First  Modification: Added basic functions and creating tables.
 *    Second Modification: Added more functions and Encryption on passwords.
 *
 */

#include "SQLite/sqlite3.h"
#include <cstdlib> // for rand()
#include <iostream>
#include <string>

#include "bcrypt/BCrypt.hpp"
#include "bcrypt/crypt_gensalt.h"
#include "bcrypt/ow-crypt.h"
#include <windows.h>

using namespace std;
sqlite3 *DB = nullptr;
int GlobalChecker = 0;
int User1ID = 0;
int User2ID = 0;
bool loggedIn = false;  // Track if the user is logged in.
bool loggedIn2 = false; // Track if the user is logged in.

// Function prototypes
int initDB(const char *db_tic_tac_toe);
int CreateTable_Users(const char *db_tic_tac_toe);
int CreateTable_Grid(const char *db_tic_tac_toe);
int CreateTable_PlayerStats(const char *db_tic_tac_toe);
int registerUser(const char *db_tic_tac_toe, string username, string password);
int login(const char *db_tic_tac_toe, string username, string password,
          bool &loggedIn);

void updatePlayerStats(const char *db_tic_tac_toe, int userID,
                       const string &column);
int determineWinner(char grid[3][3]);
void updateStats(const char *db_tic_tac_toe, int player1ID, int player2ID,
                 char grid[3][3]); // calls update player stats
int insertGameData(const char *db_tic_tac_toe, int player1ID, int player2ID,
                   char grid[3][3]);
int ShowStats(const char *db_tic_tac_toe, int UserID);
int getUserID(const char *db_tic_tac_toe, const string &username);
void startGame(const char *db_tic_tac_toe);
void closeDB();
int showHistory(const char *db_tic_tac_toe, int UserID);
string getUserName(int userID);
string generateSessionToken();
void storeSessionToken(int userID, const string &sessionToken);
void generateAndStoreSessionToken(int userID);

int main() {
  const char *dir = "C:\\Users\\HP\\Desktop\\EECE26\\Second Year Second "
                    "Term\\Embedded Systems\\StudyTest\\GameDataBase.db";

  initDB(dir);
  CreateTable_Users(dir);
  CreateTable_Grid(dir);
  CreateTable_PlayerStats(dir);

  while (true) {
    int choice;

    cout << "Menu:" << endl;
    cout << "1. Login." << endl;
    cout << "2. Register." << endl;
    cout << "3. Start Game: VS AI." << endl;
    cout << "4. Start Game: 2 Players." << endl;
    cout << "5. Show Stats" << endl;
    cout << "6. Show History" << endl;
    cout << "7. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1: {
      string username, password;
      cout << "Enter username: ";
      cin >> username;
      cout << "Enter password: ";
      cin >> password;
      User1ID = login(dir, username, password, loggedIn);
      cout << "User1ID = " << User1ID << endl;
      break;
    }
    case 2: {
      string username, password;
      cout << "Enter username: ";
      cin >> username;
      cout << "Enter password: ";
      cin >> password;
      registerUser(dir, username, password);
      break;
    }
    case 3: // Fir AI
    {
      if (loggedIn) {
        startGame(dir);
      } else {
        cout << "Please login or register first!" << endl;
      }
      break;
    }
    case 4: // For 2 players
    {
      int choice2 = 0;
      string username2, password2;

      while (true) {
        cout << "Second payer: Enter 1 for login and 2 for registering."
             << endl;
        cin >> choice2;

        if (choice2 == 1) {
          cout << "Enter username: ";
          cin >> username2;
          cout << "Enter password: ";
          cin >> password2;
          User2ID = login(dir, username2, password2, loggedIn2);
          cout << "User2ID = " << User2ID << endl;
          break;
        } else if (choice2 == 2) {
          cout << "Enter username: ";
          cin >> username2;
          cout << "Enter password: ";
          cin >> password2;
          User2ID = registerUser(dir, username2, password2);
          cout << "User2ID = " << User2ID << endl;
          break;
        } else {
          cout << "Invalid Input!!" << endl;
        }
      }

      if (loggedIn2) {
        startGame(dir);
      } else {
        cout << "Please login or register first!" << endl;
      }
      break;
    }
    case 5: // Show Stats
    {
      if (loggedIn) {
        ShowStats(dir, User1ID);
      } else {
        cout << "Please login or register first!" << endl;
      }
      break;
    }
    case 6: // Show history
    {
      if (loggedIn) {
        showHistory(dir, User1ID);
      } else {
        cout << "Please login or register first!" << endl;
      }
      break;
    }
    case 7: // Exit
    {
      cout << "Closing the database. \n" << endl;
      cout << "Exiting program... \n" << endl;
      void closeDB();
      return 0;
    }

    default: {
      cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
      break;
    }
    }
  }

  return 0;
}

int initDB(const char *db_tic_tac_toe) {
  GlobalChecker = sqlite3_open(db_tic_tac_toe, &DB);
  if (GlobalChecker != SQLITE_OK) {
    cerr << "Can't open database: " << sqlite3_errmsg(DB) << endl;
    return GlobalChecker;
  }
  cout << "Opened database successfully" << endl;
  return SQLITE_OK;
}

void closeDB() {
  if (DB != nullptr) {
    sqlite3_close(DB);
    DB = nullptr;
    cout << "Closed database successfully" << endl;
  }
}

int CreateTable_Users(const char *db_tic_tac_toe) {
  char *messageError;

  string sql = "CREATE TABLE IF NOT EXISTS UsersInformation ("
               "UserID INTEGER PRIMARY KEY AUTOINCREMENT,"
               "UserName TEXT NOT NULL UNIQUE,"
               "Password TEXT NOT NULL,"
               "SessionToken TEXT);";

  GlobalChecker = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageError);

  if (GlobalChecker != SQLITE_OK) {
    cerr << "Error creating UsersInformation table" << endl;
    sqlite3_free(messageError);
  } else {
    cout << "UsersInformation table created successfully" << endl;
  }

  return 0;
}

int CreateTable_Grid(const char *db_tic_tac_toe) {

  string sql = "CREATE TABLE IF NOT EXISTS GamesHistory ("
               "GameNumber INTEGER PRIMARY KEY AUTOINCREMENT,"
               "Player1ID INTEGER,"
               "Player2ID INTEGER,"
               "GRID_11 CHAR(1) DEFAULT ' ' CHECK(GRID_11 IN ('X', 'O', ' ')),"
               "GRID_12 CHAR(1) DEFAULT ' ' CHECK(GRID_12 IN ('X', 'O', ' ')),"
               "GRID_13 CHAR(1) DEFAULT ' ' CHECK(GRID_13 IN ('X', 'O', ' ')),"
               "GRID_21 CHAR(1) DEFAULT ' ' CHECK(GRID_21 IN ('X', 'O', ' ')),"
               "GRID_22 CHAR(1) DEFAULT ' ' CHECK(GRID_22 IN ('X', 'O', ' ')),"
               "GRID_23 CHAR(1) DEFAULT ' ' CHECK(GRID_23 IN ('X', 'O', ' ')),"
               "GRID_31 CHAR(1) DEFAULT ' ' CHECK(GRID_31 IN ('X', 'O', ' ')),"
               "GRID_32 CHAR(1) DEFAULT ' ' CHECK(GRID_32 IN ('X', 'O', ' ')),"
               "GRID_33 CHAR(1) DEFAULT ' ' CHECK(GRID_33 IN ('X', 'O', ' ')),"
               "FOREIGN KEY (Player1ID) REFERENCES UsersInformation(UserID),"
               "FOREIGN KEY (Player2ID) REFERENCES UsersInformation(UserID));";

  char *messageError;
  GlobalChecker = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageError);
  if (GlobalChecker != SQLITE_OK) {
    cerr << "Error creating GamesHistory table" << endl;
    sqlite3_free(messageError);
  } else {
    cout << "GamesHistory table created successfully" << endl;
  }
  return 0;
}

int CreateTable_PlayerStats(const char *db_tic_tac_toe) {

  string sql = "CREATE TABLE IF NOT EXISTS PlayerStats ("
               "UserID INTEGER PRIMARY KEY,"
               "Wins INTEGER DEFAULT 0,"
               "Losses INTEGER DEFAULT 0,"
               "Draws INTEGER DEFAULT 0,"
               "PlayedGames INTEGER DEFAULT 0,"
               "FOREIGN KEY (UserID) REFERENCES UsersInformation(UserID));";

  char *messageError = nullptr;
  GlobalChecker = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageError);

  if (GlobalChecker != SQLITE_OK) {
    cerr << "Error creating PlayerStats table: " << messageError << endl;
    sqlite3_free(messageError);
  } else {
    cout << "PlayerStats table created successfully" << endl;
  }
  return 1;
}

int login(const char *db_tic_tac_toe, string username, string password,
          bool &loggedIn) {
  string sql = "SELECT * FROM UsersInformation WHERE UserName = ?;";
  sqlite3_stmt *stmt;

  int CheckPrepare = sqlite3_prepare_v2(DB, sql.c_str(), -1, &stmt, NULL);

  if (CheckPrepare != SQLITE_OK) {
    cerr << "Preparation error: " << sqlite3_errmsg(DB) << endl;
    return 1;
  }

  CheckPrepare =
      sqlite3_bind_text(stmt, 1, username.c_str(), -1, SQLITE_STATIC);
  if (CheckPrepare != SQLITE_OK) {
    cerr << "Bind error: " << sqlite3_errmsg(DB) << endl;
    sqlite3_finalize(stmt);
    return 1;
  }

  bool userExists = false;
  while ((CheckPrepare = sqlite3_step(stmt)) == SQLITE_ROW) {
    userExists = true;
    string hashedPassword =
        string(reinterpret_cast<const char *>(sqlite3_column_text(stmt, 2)));

    if (BCrypt::validatePassword(password, hashedPassword)) {
      if (loggedIn == false) {
        loggedIn = true;
        generateAndStoreSessionToken(User1ID);
      } else if (loggedIn2 == false) {
        loggedIn2 = true;
        generateAndStoreSessionToken(User2ID);
      }
      cout << "Login successful!" << endl;
      return (getUserID(db_tic_tac_toe, username));
    }
  }

  if (!userExists) {
    cout << "User does not exist!" << endl;
  } else if (!loggedIn) {
    cout << "Incorrect password!" << endl;
  }

  sqlite3_finalize(stmt);
  return 0;
}

int registerUser(const char *db_tic_tac_toe, string username, string password) {
  // Check if the user already exists
  string checkExistenceSQL =
      "SELECT COUNT(*) FROM UsersInformation WHERE UserName = ?;";
  sqlite3_stmt *checkExistenceStmt;
  int CheckPrepare = sqlite3_prepare_v2(DB, checkExistenceSQL.c_str(), -1,
                                        &checkExistenceStmt, NULL);

  if (CheckPrepare != SQLITE_OK) {
    cerr << "Preparation error: " << sqlite3_errmsg(DB) << endl;
    return 1;
  }

  CheckPrepare = sqlite3_bind_text(checkExistenceStmt, 1, username.c_str(), -1,
                                   SQLITE_STATIC);
  if (CheckPrepare != SQLITE_OK) {
    cerr << "Bind error: " << sqlite3_errmsg(DB) << endl;
    sqlite3_finalize(checkExistenceStmt);
    return 1;
  }

  int userCount = 0;
  if ((CheckPrepare = sqlite3_step(checkExistenceStmt)) == SQLITE_ROW) {
    userCount = sqlite3_column_int(checkExistenceStmt, 0);
  }

  if (userCount > 0) {
    cout << "User already exists!" << endl;
    sqlite3_finalize(checkExistenceStmt);
    return 1;
  }

  sqlite3_finalize(checkExistenceStmt);

  // Insert the new user
  string hashedPassword = BCrypt::generateHash(password);
  string insertSQL =
      "INSERT INTO UsersInformation (UserName, Password) VALUES (?, ?);";
  sqlite3_stmt *insertStmt;
  CheckPrepare =
      sqlite3_prepare_v2(DB, insertSQL.c_str(), -1, &insertStmt, NULL);

  if (CheckPrepare != SQLITE_OK) {
    cerr << "Preparation error: " << sqlite3_errmsg(DB) << endl;
    return 1;
  }

  CheckPrepare =
      sqlite3_bind_text(insertStmt, 1, username.c_str(), -1, SQLITE_STATIC);
  int CheckPrepare2 = sqlite3_bind_text(insertStmt, 2, hashedPassword.c_str(),
                                        -1, SQLITE_STATIC);
  if ((CheckPrepare != SQLITE_OK) && (CheckPrepare2 != SQLITE_OK)) {
    cerr << "Bind error: " << sqlite3_errmsg(DB) << endl;
    sqlite3_finalize(insertStmt);
    return 1;
  }

  CheckPrepare = sqlite3_step(insertStmt);
  if (CheckPrepare != SQLITE_DONE) {
    cerr << "Insert error: " << sqlite3_errmsg(DB) << endl;
    sqlite3_finalize(insertStmt);
    return 1;
  }

  sqlite3_finalize(insertStmt);
  cout << "PLayer Has been added." << endl;
  int userID = getUserID(db_tic_tac_toe, username);

  // Insert initial player stats and set to zeros.
  string insertStatsSQL = "INSERT INTO PlayerStats (UserID, Wins, Losses, "
                          "Draws, PlayedGames) VALUES (?, 0, 0, 0, 0);";
  sqlite3_stmt *insertStatsStmt;
  CheckPrepare = sqlite3_prepare_v2(DB, insertStatsSQL.c_str(), -1,
                                    &insertStatsStmt, NULL);

  if (CheckPrepare != SQLITE_OK) {
    cerr << "Preparation error: " << sqlite3_errmsg(DB) << endl;
    return 1;
  }

  CheckPrepare = sqlite3_bind_int(insertStatsStmt, 1, userID);
  if (CheckPrepare != SQLITE_OK) {
    cerr << "Bind error: " << sqlite3_errmsg(DB) << endl;
    sqlite3_finalize(insertStatsStmt);
    return 1;
  }

  CheckPrepare = sqlite3_step(insertStatsStmt);
  if (CheckPrepare != SQLITE_DONE) {
    cerr << "Insert stats error: " << sqlite3_errmsg(DB) << endl;
    sqlite3_finalize(insertStatsStmt);
    return 1;
  }

  sqlite3_finalize(insertStatsStmt);
  cout << "User registered successfully and player stats initialized!" << endl;

  return (getUserID(db_tic_tac_toe, username));
}

int getUserID(const char *db_tic_tac_toe, const string &username) {
  int userID;
  string sql = "SELECT UserID FROM UsersInformation WHERE Username = ?;";
  sqlite3_stmt *stmt;
  GlobalChecker = sqlite3_prepare_v2(DB, sql.c_str(), -1, &stmt, NULL);

  if (GlobalChecker != SQLITE_OK) {
    cerr << "Preparation error from GetUserID: " << sqlite3_errmsg(DB) << endl;
    return 1;
  }

  sqlite3_bind_text(stmt, 1, username.c_str(), -1, SQLITE_STATIC);

  if (sqlite3_step(stmt) == SQLITE_ROW) {
    userID = sqlite3_column_int(stmt, 0);
  } else {
    cerr << "Error retrieving user ID" << endl;
    sqlite3_finalize(stmt);
    return 1;
  }

  sqlite3_finalize(stmt);
  return userID;
}

int insertGameData(const char *db_tic_tac_toe, int player1ID, int player2ID,
                   char grid[3][3]) {
  string sql = "INSERT INTO GamesHistory (Player1ID, Player2ID, GRID_11, "
               "GRID_12, GRID_13, GRID_21, GRID_22, GRID_23, GRID_31, GRID_32, "
               "GRID_33) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?);";
  sqlite3_stmt *stmt;
  int LocalChecker = sqlite3_prepare_v2(DB, sql.c_str(), -1, &stmt, NULL);

  if (LocalChecker != SQLITE_OK) {
    cerr << "Preparation error from insertGameData: " << sqlite3_errmsg(DB)
         << endl;
    return 1;
  }

  LocalChecker = sqlite3_bind_int(stmt, 1, player1ID);
  LocalChecker = sqlite3_bind_int(stmt, 2, player2ID);

  // Bind grid values
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      LocalChecker =
          sqlite3_bind_text(stmt, i * 3 + j + 3, &grid[i][j], 1, SQLITE_STATIC);
    }
  }

  LocalChecker = sqlite3_step(stmt);

  if (LocalChecker != SQLITE_DONE) {
    cerr << "Insert error: " << sqlite3_errmsg(DB) << endl;
    sqlite3_finalize(stmt);
    return 1;
  }

  sqlite3_finalize(stmt);
  cout << "Inserted successfully" << endl;
  return 0;
}

////////////////////////////////////////////////////////////////////////////////

void startGame(const char *db_tic_tac_toe) {
  char grid[3][3];

  cout << "Enter the grid values (9 characters 'X', 'O', or ' '): " << endl;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << "Enter grid value at position (" << i + 1 << ", " << j + 1
           << "): ";
      cin >> grid[i][j];
    }
  }

  insertGameData(db_tic_tac_toe, User1ID, User2ID, grid);
  updateStats(db_tic_tac_toe, User1ID, User2ID, grid);
}

void updateStats(const char *db_tic_tac_toe, int player1ID, int player2ID,
                 char grid[3][3]) {
  int winner = determineWinner(grid);

  if (winner == 1) {
    updatePlayerStats(db_tic_tac_toe, player1ID, "Wins");
    updatePlayerStats(db_tic_tac_toe, player1ID, "PlayedGames");
    updatePlayerStats(db_tic_tac_toe, player2ID, "Losses");
    updatePlayerStats(db_tic_tac_toe, player2ID, "PlayedGames");
  } else if (winner == 2) {
    updatePlayerStats(db_tic_tac_toe, player2ID, "Wins");
    updatePlayerStats(db_tic_tac_toe, player2ID, "PlayedGames");
    updatePlayerStats(db_tic_tac_toe, player1ID, "Losses");
    updatePlayerStats(db_tic_tac_toe, player1ID, "PlayedGames");
  } else {
    updatePlayerStats(db_tic_tac_toe, player1ID, "Draws");
    updatePlayerStats(db_tic_tac_toe, player1ID, "PlayedGames");
    updatePlayerStats(db_tic_tac_toe, player2ID, "Draws");
    updatePlayerStats(db_tic_tac_toe, player2ID, "PlayedGames");
  }
}

int determineWinner(char grid[3][3]) {
  // Implement logic to determine the winner
  // Return 1 if player 1 wins, 2 if player 2 wins, and 0 if it's a draw
  return 0; // Placeholder
}

void updatePlayerStats(const char *db_tic_tac_toe, int userID,
                       const string &column) {

  string sql = "UPDATE PlayerStats SET " + column + " = " + column +
               " + 1 WHERE UserID = ?;";
  sqlite3_stmt *stmt;
  int LocalChecker = sqlite3_prepare_v2(DB, sql.c_str(), -1, &stmt, NULL);

  if (LocalChecker != SQLITE_OK) {
    cerr << "Preparation error: " << sqlite3_errmsg(DB) << endl;
    return;
  }

  LocalChecker = sqlite3_bind_int(stmt, 1, userID);
  if (LocalChecker != SQLITE_OK) {
    cerr << "Binding error: " << sqlite3_errmsg(DB) << endl;
    sqlite3_finalize(stmt);
    return;
  }

  LocalChecker = sqlite3_step(stmt);
  if (LocalChecker != SQLITE_DONE) {
    cerr << "Update error: " << sqlite3_errmsg(DB) << endl;
    sqlite3_finalize(stmt);
    return;
  }

  sqlite3_finalize(stmt);
  cout << "Player stats updated successfully" << endl;
}

////////////////////////////////////////////////////////////////////////////////

int ShowStats(const char *db_tic_tac_toe, int UserID) {
  sqlite3_stmt *stmt;
  int LocalChecker;

  // Prepare the SQL query
  const char *sql = "SELECT Wins, Losses, Draws, PlayedGames FROM PlayerStats "
                    "WHERE UserID = ?;";
  LocalChecker = sqlite3_prepare_v2(DB, sql, -1, &stmt, 0);

  if (LocalChecker != SQLITE_OK) {
    cerr << "Failed to prepare statement: " << sqlite3_errmsg(DB) << endl;
    return 0;
  }

  // Bind the UserID to the query
  sqlite3_bind_int(stmt, 1, UserID);

  // Execute the query and fetch the results
  LocalChecker = sqlite3_step(stmt);
  if (LocalChecker == SQLITE_ROW) {
    int wins = sqlite3_column_int(stmt, 0);
    int losses = sqlite3_column_int(stmt, 1);
    int draws = sqlite3_column_int(stmt, 2);
    int playedGames = sqlite3_column_int(stmt, 3);

    // Output the results to the terminal
    cout << "User ID: " << UserID << endl;
    cout << "Wins: " << wins << endl;
    cout << "Losses: " << losses << endl;
    cout << "Draws: " << draws << endl;
    cout << "Played Games: " << playedGames << endl;
  } else {
    cout << "No history found for User ID: " << UserID << endl;
  }

  // Finalize the statement and close the database
  sqlite3_finalize(stmt);
  return 0;
}

// Function to show game history
int showGameHistory(const char *db_tic_tac_toe) {

  sqlite3_stmt *stmt;
  int LocalChecker;

  // Prepare the SQL query
  const char *sql = "SELECT GameNumber, Player1ID, Player2ID, "
                    "GRID_11, GRID_12, GRID_13, "
                    "GRID_21, GRID_22, GRID_23, "
                    "GRID_31, GRID_32, GRID_33 "
                    "FROM GamesHistory;";

  LocalChecker = sqlite3_prepare_v2(DB, sql, -1, &stmt, 0);
  if (LocalChecker != SQLITE_OK) {
    cerr << "Failed to prepare statement: " << sqlite3_errmsg(DB) << endl;
    return 0;
  }

  // Execute the query and fetch the results
  while (sqlite3_step(stmt) == SQLITE_ROW) {
    int gameNumber = sqlite3_column_int(stmt, 0);
    int player1ID = sqlite3_column_int(stmt, 1);
    int player2ID = sqlite3_column_int(stmt, 2);

    char grid[3][3];
    grid[0][0] = sqlite3_column_text(stmt, 3)[0];
    grid[0][1] = sqlite3_column_text(stmt, 4)[0];
    grid[0][2] = sqlite3_column_text(stmt, 5)[0];
    grid[1][0] = sqlite3_column_text(stmt, 6)[0];
    grid[1][1] = sqlite3_column_text(stmt, 7)[0];
    grid[1][2] = sqlite3_column_text(stmt, 8)[0];
    grid[2][0] = sqlite3_column_text(stmt, 9)[0];
    grid[2][1] = sqlite3_column_text(stmt, 10)[0];
    grid[2][2] = sqlite3_column_text(stmt, 11)[0];

    // Output the results to the terminal
    cout << "Game Number: " << gameNumber << endl;
    cout << "Player 1 ID: " << player1ID << endl;
    cout << "Player 2 ID: " << player2ID << endl;
    cout << "Grid:" << endl;
    for (int i = 0; i < 3; ++i) {
      for (int j = 0; j < 3; ++j) {
        cout << grid[i][j] << " ";
      }
      cout << endl;
    }
    cout << "---------------------------" << endl;
  }

  // Finalize the statement and close the database
  sqlite3_finalize(stmt);
  return 0;
}

string getUserName(int userID) {
  sqlite3_stmt *stmt;
  string userName;
  const char *sql = "SELECT UserName FROM UsersInformation WHERE UserID = ?";

  int LocalChecker = sqlite3_prepare_v2(DB, sql, -1, &stmt, 0);
  if (LocalChecker != SQLITE_OK) {
    cerr << "Failed to prepare UserName statement: " << sqlite3_errmsg(DB)
         << endl;
    return "";
  }

  sqlite3_bind_int(stmt, 1, userID);

  if (sqlite3_step(stmt) == SQLITE_ROW) {
    userName = reinterpret_cast<const char *>(sqlite3_column_text(stmt, 0));
  }

  sqlite3_finalize(stmt);
  return userName;
}

int showHistory(const char *db_tic_tac_toe, int UserID) {

  sqlite3_stmt *stmt;
  int LocalChecker;

  // Prepare the SQL query to fetch game history for the specific UserID
  const char *sql = "SELECT GameNumber, Player1ID, Player2ID, "
                    "GRID_11, GRID_12, GRID_13, "
                    "GRID_21, GRID_22, GRID_23, "
                    "GRID_31, GRID_32, GRID_33 "
                    "FROM GamesHistory "
                    "WHERE Player1ID = ? OR Player2ID = ?;";

  LocalChecker = sqlite3_prepare_v2(DB, sql, -1, &stmt, 0);

  if (LocalChecker != SQLITE_OK) {
    cerr << "Failed to prepare statement: " << sqlite3_errmsg(DB) << endl;
    return 0;
  }

  // Bind the UserID to the query
  sqlite3_bind_int(stmt, 1, UserID);
  sqlite3_bind_int(stmt, 2, UserID);

  // Execute the query and fetch the results
  while (sqlite3_step(stmt) == SQLITE_ROW) {
    int gameNumber = sqlite3_column_int(stmt, 0);
    int player1ID = sqlite3_column_int(stmt, 1);
    int player2ID = sqlite3_column_int(stmt, 2);

    string player1Name = getUserName(player1ID);
    string player2Name = getUserName(player2ID);

    char grid[3][3];
    grid[0][0] = sqlite3_column_text(stmt, 3)[0];
    grid[0][1] = sqlite3_column_text(stmt, 4)[0];
    grid[0][2] = sqlite3_column_text(stmt, 5)[0];
    grid[1][0] = sqlite3_column_text(stmt, 6)[0];
    grid[1][1] = sqlite3_column_text(stmt, 7)[0];
    grid[1][2] = sqlite3_column_text(stmt, 8)[0];
    grid[2][0] = sqlite3_column_text(stmt, 9)[0];
    grid[2][1] = sqlite3_column_text(stmt, 10)[0];
    grid[2][2] = sqlite3_column_text(stmt, 11)[0];

    // Output the results to the terminal
    cout << "Game Number: " << gameNumber << endl;
    cout << "Player 1: " << player1Name << " (ID: " << player1ID << ")" << endl;
    cout << "Player 2: " << player2Name << " (ID: " << player2ID << ")" << endl;
    cout << "Grid:" << endl;
    for (int i = 0; i < 3; ++i) {
      for (int j = 0; j < 3; ++j) {
        cout << grid[i][j] << " ";
      }
      cout << endl;
    }
    cout << "---------------------------" << endl;
  }

  sqlite3_finalize(stmt);
  return 0;
}

////////////////////////////////////////////////////////////////////////////////

string generateSessionToken() {
  const string charset =
      "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  const int tokenLength = 32;
  string sessionToken;
  for (int i = 0; i < tokenLength; ++i) {
    sessionToken += charset[rand() % charset.length()];
  }
  return sessionToken;
}

void storeSessionToken(int userID, const string &sessionToken) {
  string sql = "UPDATE UsersInformation SET SessionToken = ? WHERE UserID = ?;";
  sqlite3_stmt *stmt;
  int LocalChecker = sqlite3_prepare_v2(DB, sql.c_str(), -1, &stmt, NULL);

  if (LocalChecker != SQLITE_OK) {
    cerr << "Preparation error from storeSessionToken: " << sqlite3_errmsg(DB)
         << endl;
    return;
  }

  LocalChecker =
      sqlite3_bind_text(stmt, 1, sessionToken.c_str(), -1, SQLITE_STATIC);
  LocalChecker = sqlite3_bind_int(stmt, 2, userID);

  LocalChecker = sqlite3_step(stmt);

  if (LocalChecker != SQLITE_DONE) {
    cerr << "Update error: " << sqlite3_errmsg(DB) << endl;
  }

  sqlite3_finalize(stmt);
}

void generateAndStoreSessionToken(int userID) {
  string sessionToken = generateSessionToken();
  storeSessionToken(userID, sessionToken);
  cout << "Assigned a sessionToken = " << sessionToken << endl;
}
