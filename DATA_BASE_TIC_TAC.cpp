#include <iostream>
#include <string>
#include <sqlite3.h>

static int CreateDB(const char* db_tic_tac_toe);
static int CreateTableUsers(const char* db_tic_tac_toe);
static int CreateTableGrid(const char* db_tic_tac_toe);
static int InsertData(const char* db_tic_tac_toe, const std::string& name, const std::string& password, const char grid_values[]);
static int SelectData(const char* db_tic_tac_toe, const std::string& name);
static int SelectHistory(const char* db_tic_tac_toe, const std::string& name);
static bool CheckingPassword(const char* db_tic_tac_toe, std::string& name, std::string& password);

int main() {
    const char* dir = "c:\\tic_tac_toe\\tic_tac_toe_NEW.db";
    sqlite3* DB;
    CreateDB(dir);
    CreateTableUsers(dir);
    CreateTableGrid(dir);
    std::string name;
    std::string password;
    char grid_values[10]; // Changed to an array of characters

    std::cout << "Enter the user name: ";
    std::cin >> name;

    if (!CheckingPassword(dir, name, password)) {
        std::cerr << "Authentication failed." << std::endl;
        return 1;
    }

    std::cout << "Enter the grid values (9 characters 'X', 'O', or ' '): ";
    for (int i = 0; i < 9; i++) {
        std::cout << "Enter grid no " << i << ": ";
        std::cin >> grid_values[i];
    }
    std::cout << std::endl;

    InsertData(dir, name, password, grid_values);
    SelectData(dir, name);
    SelectHistory(dir, name);

    return 0;
}

static int CreateDB(const char* db_tic_tac_toe) {
    sqlite3* DB;
    int exit = 0;
    exit = sqlite3_open(db_tic_tac_toe, &DB);
    sqlite3_close(DB);
    return 0;
}

static int CreateTableUsers(const char* db_tic_tac_toe) {
    sqlite3* DB;
    std::string sql = "CREATE TABLE IF NOT EXISTS USERSINFORMATIONS ("
        "UserID INTEGER PRIMARY KEY AUTOINCREMENT,"
        "USER_NAME TEXT NOT NULL UNIQUE,"
        "PASSWORD TEXT NOT NULL);";

    try {
        int exit = 0;
        exit = sqlite3_open(db_tic_tac_toe, &DB);
        char* messageError;
        exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageError);
        if (exit != SQLITE_OK) {
            std::cerr << "Error creating USERSINFORMATIONS table" << std::endl;
            sqlite3_free(messageError);
        }
        else
            std::cout << "USERSINFORMATIONS table created successfully" << std::endl;
        sqlite3_close(DB);
    }
    catch (const std::exception& e) {
        std::cerr << e.what();
    }
    return 0;
}

static int CreateTableGrid(const char* db_tic_tac_toe) {
    sqlite3* DB;
    std::string sql = "CREATE TABLE IF NOT EXISTS USERGRID ("
        "UserID INTEGER,"
        "GameNumber INTEGER,"
        "GRID_11 CHAR(1) DEFAULT ' ' CHECK(GRID_11 IN ('X', 'O', ' ')),"
        "GRID_12 CHAR(1) DEFAULT ' ' CHECK(GRID_12 IN ('X', 'O', ' ')),"
        "GRID_13 CHAR(1) DEFAULT ' ' CHECK(GRID_13 IN ('X', 'O', ' ')),"
        "GRID_21 CHAR(1) DEFAULT ' ' CHECK(GRID_21 IN ('X', 'O', ' ')),"
        "GRID_22 CHAR(1) DEFAULT ' ' CHECK(GRID_22 IN ('X', 'O', ' ')),"
        "GRID_23 CHAR(1) DEFAULT ' ' CHECK(GRID_23 IN ('X', 'O', ' ')),"
        "GRID_31 CHAR(1) DEFAULT ' ' CHECK(GRID_31 IN ('X', 'O', ' ')),"
        "GRID_32 CHAR(1) DEFAULT ' ' CHECK(GRID_32 IN ('X', 'O', ' ')),"
        "GRID_33 CHAR(1) DEFAULT ' ' CHECK(GRID_33 IN ('X', 'O', ' ')),"
        "FOREIGN KEY (UserID) REFERENCES USERSINFORMATIONS(UserName));";

    try {
        int exit = 0;
        exit = sqlite3_open(db_tic_tac_toe, &DB);
        char* messageError;
        exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageError);
        if (exit != SQLITE_OK) {
            std::cerr << "Error creating USERGRID table" << std::endl;
            sqlite3_free(messageError);
        }
        else
            std::cout << "USERGRID table created successfully" << std::endl;
        sqlite3_close(DB);
    }
    catch (const std::exception& e) {
        std::cerr << e.what();
    }
    return 0;
}

static bool CheckingPassword(const char* db_tic_tac_toe, std::string& name, std::string& password) {
    sqlite3* DB;
    int exit = sqlite3_open(db_tic_tac_toe, &DB);
    std::string sql = "SELECT PASSWORD FROM USERSINFORMATIONS WHERE USER_NAME = ?;";

    sqlite3_stmt* stmt;
    exit = sqlite3_prepare_v2(DB, sql.c_str(), -1, &stmt, nullptr);
    if (exit != SQLITE_OK) {
        std::cerr << "Preparation error: " << sqlite3_errmsg(DB) << std::endl;
        sqlite3_close(DB);
        return false;
    }

    // Bind parameter to the prepared statement
    exit = sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_STATIC);

    // Execute the SQL statement
    while ((exit = sqlite3_step(stmt)) == SQLITE_ROW) {
        std::string stored_password(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0)));
        sqlite3_finalize(stmt);
        sqlite3_close(DB);

        std::cout << "Enter password for user '" << name << "': ";
        std::cin >> password;

        if (stored_password == password) {
            return true;
        }
        else {
            std::cout << "Incorrect password. Please try again." << std::endl;
            for (int i=0; i < 5; i++)
            {
                std::cin >> password;
                if (stored_password == password) {
                    return true;
                }
                std::cout << "Incorrect password. Please try again." << std::endl;
            }
            return false;
        }
    }

    // If the username wasn't found, insert it with a password
    std::cout << "User not found. Creating new user..." << std::endl;
    std::cout << "Enter a new password for user '" << name << "': ";
    std::cin >> password;

    std::string insert_sql = "INSERT INTO USERSINFORMATIONS (USER_NAME, PASSWORD) VALUES (?, ?);";
    sqlite3_stmt* insert_stmt;
    exit = sqlite3_prepare_v2(DB, insert_sql.c_str(), -1, &insert_stmt, nullptr);
    if (exit != SQLITE_OK) {
        std::cerr << "Preparation error: " << sqlite3_errmsg(DB) << std::endl;
        sqlite3_close(DB);
        return false;
    }

    exit = sqlite3_bind_text(insert_stmt, 1, name.c_str(), -1, SQLITE_STATIC);
    exit = sqlite3_bind_text(insert_stmt, 2, password.c_str(), -1, SQLITE_STATIC);

    exit = sqlite3_step(insert_stmt);
    if (exit != SQLITE_DONE) {
        std::cerr << "Insert error: " << sqlite3_errmsg(DB) << std::endl;
        sqlite3_finalize(insert_stmt);
        sqlite3_close(DB);
        return false;
    }

    sqlite3_finalize(insert_stmt);
    sqlite3_close(DB);

    return true;
}

static int InsertData(const char* db_tic_tac_toe, const std::string& name, const std::string& password, const char grid_values[]) {
    sqlite3* DB;
    int exit = sqlite3_open(db_tic_tac_toe, &DB);
    char* messageError;
    std::string sql_users = "INSERT OR IGNORE INTO USERSINFORMATIONS (USER_NAME, PASSWORD) VALUES (?, ?);";
    std::string sql_userid = "SELECT UserID FROM USERSINFORMATIONS WHERE USER_NAME = ?;";
    std::string sql_grid = "INSERT INTO USERGRID (UserID, GameNumber, GRID_11, GRID_12, GRID_13, GRID_21, GRID_22, GRID_23, GRID_31, GRID_32, GRID_33) VALUES (?, (SELECT IFNULL(MAX(GameNumber), 0) + 1 FROM USERGRID WHERE UserID = ?), ?, ?, ?, ?, ?, ?, ?, ?, ?);";

    sqlite3_stmt* stmt_users;
    exit = sqlite3_prepare_v2(DB, sql_users.c_str(), -1, &stmt_users, NULL);
    if (exit != SQLITE_OK) {
        std::cerr << "Preparation error (USERSINFORMATIONS): " << sqlite3_errmsg(DB) << std::endl;
        sqlite3_close(DB);
        return 1;
    }

    exit = sqlite3_bind_text(stmt_users, 1, name.c_str(), -1, SQLITE_STATIC);
    exit = sqlite3_bind_text(stmt_users, 2, password.c_str(), -1, SQLITE_STATIC);

    exit = sqlite3_step(stmt_users);
    if (exit != SQLITE_DONE) {
        std::cerr << "Insert error (USERSINFORMATIONS): " << sqlite3_errmsg(DB) << std::endl;
        sqlite3_finalize(stmt_users);
        sqlite3_close(DB);
        return 1;
    }

    sqlite3_finalize(stmt_users);

    sqlite3_stmt* stmt_userid;
    exit = sqlite3_prepare_v2(DB, sql_userid.c_str(), -1, &stmt_userid, NULL);
    if (exit != SQLITE_OK) {
        std::cerr << "Preparation error (USERID): " << sqlite3_errmsg(DB) << std::endl;
        sqlite3_close(DB);
        return 1;
    }

    exit = sqlite3_bind_text(stmt_userid, 1, name.c_str(), -1, SQLITE_STATIC);

    int userID = -1;
    while ((exit = sqlite3_step(stmt_userid)) == SQLITE_ROW) {
        userID = sqlite3_column_int(stmt_userid, 0);
    }

    sqlite3_finalize(stmt_userid);

    if (userID == -1) {
        std::cerr << "User not found" << std::endl;
        sqlite3_close(DB);
        return 1;
    }

    sqlite3_stmt* stmt_grid;
    exit = sqlite3_prepare_v2(DB, sql_grid.c_str(), -1, &stmt_grid, NULL);
    if (exit != SQLITE_OK) {
        std::cerr << "Preparation error (USERGRID): " << sqlite3_errmsg(DB) << std::endl;
        sqlite3_close(DB);
        return 1;
    }

    exit = sqlite3_bind_int(stmt_grid, 1, userID);
    exit = sqlite3_bind_int(stmt_grid, 2, userID);
    // Bind grid values
    for (int i = 0; i < 9; ++i) {
        exit = sqlite3_bind_text(stmt_grid, i + 3, &grid_values[i], 1, SQLITE_STATIC); // Corrected the binding
    }

    exit = sqlite3_step(stmt_grid);
    if (exit != SQLITE_DONE) {
        std::cerr << "Insert error (USERGRID): " << sqlite3_errmsg(DB) << std::endl;
        sqlite3_finalize(stmt_grid);
        sqlite3_close(DB);
        return 1;
    }

    sqlite3_finalize(stmt_grid);
    sqlite3_close(DB);

    std::cout << "Inserted successfully" << std::endl;
    return 0;
}

static int SelectData(const char* db_tic_tac_toe, const std::string& name) {
    sqlite3* DB;
    int exit = sqlite3_open(db_tic_tac_toe, &DB);
    std::string sql = "SELECT USER_NAME, PASSWORD, "
        "GRID_11, GRID_12, GRID_13, "
        "GRID_21, GRID_22, GRID_23, "
        "GRID_31, GRID_32, GRID_33 "
        "FROM USERSINFORMATIONS "
        "JOIN USERGRID ON USERSINFORMATIONS.UserID = USERGRID.UserID "
        "WHERE USERSINFORMATIONS.USER_NAME = ?;";

    sqlite3_stmt* stmt;
    exit = sqlite3_prepare_v2(DB, sql.c_str(), -1, &stmt, NULL);
    if (exit != SQLITE_OK) {
        std::cerr << "Preparation error: " << sqlite3_errmsg(DB) << std::endl;
        sqlite3_close(DB);
        return 1;
    }

    // Bind parameter to the prepared statement
    exit = sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_STATIC);

    // Execute the SQL statement
    while ((exit = sqlite3_step(stmt)) == SQLITE_ROW) {
        // Print the results
        std::cout << "User information:" << std::endl;
        std::cout << "User Name: " << sqlite3_column_text(stmt, 0) << std::endl;
        std::cout << "Password: " << sqlite3_column_text(stmt, 1) << std::endl;
        std::cout << "Grid Values:" << std::endl;
        for (int i = 2; i < sqlite3_column_count(stmt); i++) {
            std::cout << sqlite3_column_name(stmt, i) << ": " << sqlite3_column_text(stmt, i) << std::endl;
        }
    }

    if (exit != SQLITE_DONE) {
        std::cerr << "Select error: " << sqlite3_errmsg(DB) << std::endl;
        sqlite3_finalize(stmt);
        sqlite3_close(DB);
        return 1;
    }

    sqlite3_finalize(stmt);
    sqlite3_close(DB);
    return 0;
}

static int SelectHistory(const char* db_tic_tac_toe, const std::string& name) {
    sqlite3* DB;
    int exit = sqlite3_open(db_tic_tac_toe, &DB);
    std::string sql = "SELECT * FROM USERGRID "
        "WHERE UserID = (SELECT UserID FROM USERSINFORMATIONS WHERE USER_NAME = ?);";

    sqlite3_stmt* stmt;
    exit = sqlite3_prepare_v2(DB, sql.c_str(), -1, &stmt, NULL);
    if (exit != SQLITE_OK) {
        std::cerr << "Preparation error: " << sqlite3_errmsg(DB) << std::endl;
        sqlite3_close(DB);
        return 1;
    }

    // Bind parameter to the prepared statement
    exit = sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_STATIC);

    // Execute the SQL statement
    while ((exit = sqlite3_step(stmt)) == SQLITE_ROW) {
        // Print the results
        std::cout << "Game Number: " << sqlite3_column_int(stmt, 1) << std::endl;
        std::cout << "Grid Values:" << std::endl;
        for (int i = 2; i < sqlite3_column_count(stmt); i++) {
            std::cout << sqlite3_column_name(stmt, i) << ": " << sqlite3_column_text(stmt, i) << std::endl;
        }
    }

    if (exit != SQLITE_DONE) {
        std::cerr << "Select error: " << sqlite3_errmsg(DB) << std::endl;
        sqlite3_finalize(stmt);
        sqlite3_close(DB);
        return 1;
    }

    sqlite3_finalize(stmt);
    sqlite3_close(DB);
    return 0;
}
