#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 3;
const char EMPTY = '-';
const char PLAYER_X = 'X';
const char PLAYER_O = 'O';
int currentPlayer = 1;
bool draw=false;
// Structure to represent a move
struct Move {
    int row, col;
};

// Function to display the Tic Tac Toe board
void displayBoard(const vector<vector<char>>& board) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if a move is valid
bool isValidMove(const vector<vector<char>>& board, int row, int col) {
    return (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == EMPTY);
}

// Function to check if the game has ended in a win or a tie
bool isGameOver(const vector<vector<char>>& board, char player) {
    // Check rows and columns for a win
    for (int i = 0; i < SIZE; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    // Check diagonals for a win
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    // Check for a tie
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] == EMPTY)
                return false;
        }  
    } draw =true;
     return true; 
}

// Function to evaluate the score of the board
int evaluate(const vector<vector<char>>& board) {
    // Check rows and columns for a win
    for (int i = 0; i < SIZE; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            if (board[i][0] == PLAYER_X) return 10;
            else if (board[i][0] == PLAYER_O) return -10;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            if (board[0][i] == PLAYER_X) return 10;
            else if (board[0][i] == PLAYER_O) return -10;
        }
    }
    // Check diagonals for a win
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        if (board[0][0] == PLAYER_X) return 10;
        else if (board[0][0] == PLAYER_O) return -10;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        if (board[0][2] == PLAYER_X) return 10;
        else if (board[0][2] == PLAYER_O) return -10;
    }
    return 0; // No win
}

// Minimax function with alpha-beta pruning
int minimax(vector<vector<char>>& board, int depth, bool isMax, int alpha, int beta) {
    int score = evaluate(board);
    if (score != 0) return score;
    if (isGameOver(board, PLAYER_X) || isGameOver(board, PLAYER_O)) return score;
    if (depth >= SIZE * SIZE) return 0;

    if (isMax) {
        int best = INT_MIN;
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                if (board[i][j] == EMPTY) {
                    board[i][j] = PLAYER_X;
                    best = max(best, minimax(board, depth + 1, !isMax, alpha, beta));
                    alpha = max(alpha, best);
                    board[i][j] = EMPTY;
                    if (beta <= alpha) break;
                }
            }
        }
        return best;
    } else {
        int best = INT_MAX;
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                if (board[i][j] == EMPTY) {
                    board[i][j] = PLAYER_O;
                    best = min(best, minimax(board, depth + 1, !isMax, alpha, beta));
                    beta = min(beta, best);
                    board[i][j] = EMPTY;
                    if (beta <= alpha) break;
                }
            }
        }
        return best;
    }
}

// Function to find the best move using minimax algorithm with alpha-beta pruning
Move findBestMove(vector<vector<char>>& board) {
    int bestVal = INT_MIN;
    Move bestMove;
    bestMove.row = -1;
    bestMove.col = -1;

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] == EMPTY) {
                board[i][j] = PLAYER_X;
                int moveVal = minimax(board, 0, false, INT_MIN, INT_MAX);
                board[i][j] = EMPTY;
                if (moveVal > bestVal) {
                    bestMove.row = i;
                    bestMove.col = j;
                    bestVal = moveVal;
                }
            }
        }
    }

    return bestMove;
}

// Function to let the human player make a move
void playerMove(vector<vector<char>>& board) {
    int row, col;
    cout << "Enter row and column (0-2): ";
    cin >> row >> col;
    if (isValidMove(board, row, col)) {
        if (currentPlayer == 1)
        board[row][col] = PLAYER_X;
        else  board[row][col] = PLAYER_O;
    } else {
        cout << "Invalid move. Try again." << endl;
        playerMove(board);
    }
}

// Function to let the AI make a move
void aiMove(vector<vector<char>>& board) {
    cout << "AI's turn." << endl;
    Move aiMove = findBestMove(board);
    board[aiMove.row][aiMove.col] = PLAYER_O;
}

// Function to let two human players play against each other
void playTwoPlayers() {
    vector<vector<char>> board(SIZE, vector<char>(SIZE, EMPTY));
    
    while (!isGameOver(board, PLAYER_X) && !isGameOver(board, PLAYER_O) ) {
        displayBoard(board);
        cout << "Player " << (currentPlayer == 1 ? "X" : "O") << "'s turn." << endl;
        playerMove(board);
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    displayBoard(board);
    if (isGameOver(board, PLAYER_X)&& !draw) cout << "Player X wins!" << endl;
    else if (isGameOver(board, PLAYER_O)&& !draw) cout << "Player O wins!" << endl;
    else if (draw) cout << "It's a tie!" << endl;
}

// Function to let the human player play against the AI
void playAgainstAI() {
    vector<vector<char>> board(SIZE, vector<char>(SIZE, EMPTY));
    int currentPlayer = 1;

    while (!isGameOver(board, PLAYER_X) && !isGameOver(board, PLAYER_O)) {
        displayBoard(board);
        if (currentPlayer == 1) {
            playerMove(board);
        } else {
            aiMove(board);
        }
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    displayBoard(board);
    if (isGameOver(board, PLAYER_X)) cout << "Player X wins!" << endl;
    else if (isGameOver(board, PLAYER_O)) cout << "Player O wins!" << endl;
    else if(draw) cout << "It's a tie!" << endl;
    
}

int main() {
    srand(time(0)); // Seed for random number generator
    int choice;
    cout << "Welcome to Tic Tac Toe!" << endl;
    cout << "Choose an option:" << endl;
    cout << "1. Play against another player" << endl;
    cout << "2. Play against the AI" << endl;
    cout << " Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            playTwoPlayers();
            break;
        case 2:
            playAgainstAI();
            break;
        default:
            cout << "Invalid choice. Exiting..." << endl;
            break;
    }

    return 0;
}