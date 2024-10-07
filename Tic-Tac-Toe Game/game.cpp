#include <iostream>
#include <limits>
using namespace std;

char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
char currentMarker;
int currentPlayer;

void drawBoard() {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "-------------" << endl;
    }
}

bool placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentMarker;
        return true;
    }
    return false;
}

int winner() {
    // Rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return currentPlayer;
        }
    }
    // Columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return currentPlayer;
        }
    }
    // Diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return currentPlayer;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return currentPlayer;
    }

    return 0;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 1) ? 2 : 1;
    currentMarker = (currentMarker == 'X') ? 'O' : 'X';
}

int getInput() {
    int slot;
    while (true) {
        cout << "Enter your slot (1-9): ";
        cin >> slot;
        
        // Check for valid integer input
        if (cin.fail() || slot < 1 || slot > 9) {
            cin.clear(); // clear the error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a number between 1 and 9." << endl;
        } else {
            return slot;
        }
    }
}

void game() {
    cout << "Welcome to Tic-Tac-Toe!" << endl;
    cout << "Player 1, choose your marker (X or O): ";
    char markerP1;
    
    while (true) {
        cin >> markerP1;
        if (markerP1 == 'X' || markerP1 == 'O') {
            break;
        } else {
            cout << "Invalid marker! Please choose either 'X' or 'O'." << endl;
        }
    }

    currentPlayer = 1;
    currentMarker = markerP1;

    drawBoard();

    int playerWon;
    for (int i = 0; i < 9; i++) {
        cout << "Player " << currentPlayer << "'s turn." << endl;
        int slot = getInput();  // Validated slot input

        if (!placeMarker(slot)) {
            cout << "Slot occupied! Try a different slot." << endl;
            i--;
            continue;
        }

        drawBoard();
        playerWon = winner();

        if (playerWon == 1) {
            cout << "Player 1 wins!" << endl;
            break;
        } else if (playerWon == 2) {
            cout << "Player 2 wins!" << endl;
            break;
        }

        switchPlayer();
    }

    if (playerWon == 0) {
        cout << "It's a tie!" << endl;
    }
}

int main() {
    game();
    return 0;
}
