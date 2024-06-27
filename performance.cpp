#include <iostream>
#include <chrono>
#include <limits>
#include <vector>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;
using namespace std::chrono;

class TicTacToe {
private:
  vector<vector<char>> board;
  char player1;
  char player2;
  char currentPlayer;
  bool playWithAI;

public:
  TicTacToe(bool playAI = false) {
    board.resize(3, vector<char>(3, ' '));
    player1 = 'X';
    player2 = 'O';
    currentPlayer = player1;
    playWithAI = playAI;  // Initialize with constructor argument
  }

  void play() {
    while (true) {
      if (playWithAI && currentPlayer == player2) {
        auto start = high_resolution_clock::now();
        makeAIMove();
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "AI move took " << duration.count() << " microseconds." << endl;
      } else {
        makeMove();
      }
      if (checkWin()) {
        break;
      }
      if (checkTie()) {
        break;
      }
      switchPlayer();
    }
  }

  // Public method to set whether to play with AI or not
  void setPlayWithAI(bool playAI) {
    playWithAI = playAI;
  }

  // Public method to test random moves
  void testRandomMoves() {
    auto totalStart = high_resolution_clock::now();
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    cout << "Testing random moves:" << endl;
    while (!checkWin() && !checkTie()) {
      if (playWithAI && currentPlayer == player2) {
        auto start = high_resolution_clock::now();
        makeAIMove();
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "AI move took " << duration.count() << " microseconds." << endl;
      } else {
        makeMove();
      }
      displayBoard();
      switchPlayer();
    }

    auto totalStop = high_resolution_clock::now();
    auto totalDuration = duration_cast<microseconds>(totalStop - totalStart);
    cout << "Total time for AI moves: " << totalDuration.count() << " microseconds." << endl;

    if (checkWin()) {
      cout << "Player " << currentPlayer << " wins!" << endl;
    } else {
      cout << "It's a tie!" << endl;
    }
  }

private:
  void makeMove() {
    int row, col;
    while (true) {
      // Randomly generate moves for player 1 (human) for demonstration
      row = rand() % 3 + 1;   // Generate random row (1-3)
      col = rand() % 3 + 1;   // Generate random column (1-3)
      if (board[row-1][col-1] == ' ') {
        board[row-1][col-1] = currentPlayer;
        break;
      }
    }
  }

  void makeAIMove() {
    int bestScore = -numeric_limits<int>::max();
    int bestRow = -1;
    int bestCol = -1;
    auto start = high_resolution_clock::now();

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (board[i][j] == ' ') {
          board[i][j] = player2;
          int score = minimax(0, false, -numeric_limits<int>::max(),
                              numeric_limits<int>::max());
          board[i][j] = ' ';
          if (score > bestScore) {
            bestScore = score;
            bestRow = i;
            bestCol = j;
          }
        }
      }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "AI's decision-making took " << duration.count() << " microseconds." << endl;

    board[bestRow][bestCol] = player2;
  }

  int minimax(int depth, bool isMaximizingPlayer, int alpha, int beta) {
    if (checkWin()) {
      return isMaximizingPlayer ? -10 + depth : 10 - depth;
    }
    if (checkTie()) {
      return 0;
    }

    if (isMaximizingPlayer) {
      int bestScore = -numeric_limits<int>::max();
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          if (board[i][j] == ' ') {
            board[i][j] = player2;
            int score = minimax(depth + 1, false, alpha, beta);
            board[i][j] = ' ';
            bestScore = max(bestScore, score);
            alpha = max(alpha, bestScore);
            if (beta <= alpha)
              break;
          }
        }
      }
      return bestScore;
    } else {
      int bestScore = numeric_limits<int>::max();
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          if (board[i][j] == ' ') {
            board[i][j] = player1;
            int score = minimax(depth + 1, true, alpha, beta);
            board[i][j] = ' ';
            bestScore = min(bestScore, score);
            beta = min(beta, bestScore);
            if (beta <= alpha)
              break;
          }
        }
      }
      return bestScore;
    }
  }

  bool checkWin() {
    // Check rows
    for (int i = 0; i < 3; i++) {
      if (board[i][0] == board[i][1] && board[i][1] == board[i][2] &&
          board[i][0] != ' ') {
        return true;
      }
    }
    // Check columns
    for (int j = 0; j < 3; j++) {
      if (board[0][j] == board[1][j] && board[1][j] == board[2][j] &&
          board[0][j] != ' ') {
        return true;
      }
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] &&
        board[0][0] != ' ') {
      return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] &&
        board[0][2] != ' ') {
      return true;
    }
    return false;
  }

  bool checkTie() {
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (board[i][j] == ' ') {
          return false;
        }
      }
    }
    return true;
  }

  void switchPlayer() {
    currentPlayer = (currentPlayer == player1) ? player2 : player1;
  }

  // Reset the game board and player turn for a new game
  void resetGame() {
    for (int i = 0; i < 3; ++i) {
      for (int j = 0; j < 3; ++j) {
        board[i][j] = ' ';
      }
    }
    currentPlayer = player1;
  }

  // Function to simulate moves for both players
  void simulateMoves(vector<pair<int, int>> moves) {
    for (auto move : moves) {
      if (currentPlayer == player1 || !playWithAI) {
        makeMove(move.first, move.second);
      } else {
        makeAIMove();
      }
      if (checkWin() || checkTie()) {
        break;
      }
      switchPlayer();
    }
  }

  // Make a move at specified row and column
  void makeMove(int row, int col) {
    row--;
    col--;
    if (row >= 0 && row < 3 && col >= 0 && col < 3 &&
        board[row][col] == ' ') {
      board[row][col] = currentPlayer;
    }
  }

  // Function to display the current state of the board
  void displayBoard() {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; i++) {
      cout << "| ";
      for (int j = 0; j < 3; j++) {
        cout << board[i][j] << " | ";
      }
      cout << endl << "-------------" << endl;
    }
  }
};

int main() {
  TicTacToe game(true); // Initialize game to play with AI

  // Test random moves with microsecond timing
  game.testRandomMoves();

  return 0;
}
