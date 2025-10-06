#include <iostream>
#include <vector>

void print_board(std::vector<std::vector<char>> board) {
    for (std::vector<char>& row : board) {
        for (char sel : row) {
            std::cout << sel << " ";
        }
        std::cout << std::endl;
    }
}

// Returns 0 if success, 1 if there is already an X or O
int place_X(std::vector<std::vector<char>>& board, int row, int column) {
    char current = board.at(row).at(column);
    if (current == 'O' || current == 'X'){
        return 1;
    }
    board.at(row).at(column) = 'X';
    return 0;
}

// Returns 0 if success, 1 if there is already an X or O
int place_O(std::vector<std::vector<char>>& board, int row, int column) {
    char current = board.at(row).at(column);
    if (current == 'O' || current == 'X'){
        return 1;
    }
    board.at(row).at(column) = 'O';
    return 0;
}

// Returns the player number for whoever wins. 0 if it's a tie. -1 if there's no winner or tie yet.
int check_winner(std::vector<std::vector<char>>& board) {
    // make this easier for me plz
    std::vector<char> row1 = board.at(0);
    std::vector<char> row2 = board.at(1);
    std::vector<char> row3 = board.at(2);

    if (row1.at(0) == row1.at(1) && row1.at(0) == row1.at(2)) {
        if (row1.at(0) == 'X') {
            return 1;
        }
        if (row1.at(0) == 'O') {
            return 2;
        }
    }

    if (row2.at(0) == row2.at(1) && row2.at(0)== row2.at(2)) {
        if (row2.at(0) == 'X') {
            return 1;
        }
        if (row2.at(0) == 'O') {
            return 2;
        }
    }

    if (row3.at(0) == row3.at(1) && row3.at(0) == row3.at(2)) {
        if (row3.at(0) == 'X') {
            return 1;
        }
        if (row3.at(0) == 'O') {
            return 2;
        }
    }

    if (row1.at(0) == row2.at(0) && row1.at(0) == row3.at(0)) {
        if (row1.at(0) == 'X') {
            return 1;
        }
        if (row1.at(0) == 'O') {
            return 2;
        }
    }

    if (row1.at(1) == row2.at(1) && row1.at(1) == row3.at(1)) {
        if (row1.at(1) == 'X') {
            return 1;
        }
        if (row1.at(1) == 'O') {
            return 2;
        }
    }

    if (row1.at(2) == row2.at(2) && row1.at(2) == row3.at(2)) {
        if (row1.at(2) == 'X') {
            return 1;
        }
        if (row1.at(2) == 'O') {
            return 2;
        }
    }

    if (row1.at(0) == row2.at(1) && row1.at(0) == row3.at(2)) {
        if (row1.at(0) == 'X') {
            return 1;
        }
        if (row1.at(0) == 'O') {
            return 2;
        }
    }

    if (row3.at(0) == row2.at(1) && row3.at(0) == row3.at(0)) {
        if (row3.at(0) == 'X') {
            return 1;
        }
        if (row3.at(0) == 'O') {
            return 2;
        }
    }

    if (row1.at(0) == '.' || row1.at(1) == '.' || row1.at(2) == '.' || row2.at(0) == '.' || row2.at(1) == '.' || row2.at(2) == '.' || row3.at(0) == '.' || row3.at(1) == '.' || row3.at(2) == '.') return -1;

    return 0;
}

int main() {
    std::vector<std::vector<char>> board = {};
    int row = 0;
    int column = 0;
    int currentPlayer = 1;

    for (int i = 0; i < 3; ++i) {
        board.push_back({});

        for (int j = 0; j < 3; j++) {
            board.at(i).push_back('.');
        }
    }

    print_board(board);

    std::cout << "Tic-Tac-Toe. Player 1 starts (X). Please type using this input: <row_index> <column_index>\n" << "Example: 1 2 -> Prints letter on the middle right" ;

    while (true) {
        std::cout << "Player " << currentPlayer << "'s turn." << std::endl;
        std::cin >> row >> column;
        if (row == -1) {
            break;
        }
        if (currentPlayer == 1) {
            place_X(board, row, column);
            currentPlayer = 2;
        } else if (currentPlayer == 2) {
            place_O(board, row, column);
            currentPlayer = 1;
        }
        print_board(board);
        if (check_winner(board) == 1) {
            std::cout << "Player 1 wins!" << std::endl;
            break;
        }
        if (check_winner(board) == 2) {
            std::cout << "Player 2 wins!" << std::endl;
            break;
        }
        if (check_winner(board) == 0) {
            std::cout << "Tie!" << std::endl;
            break;
        }
    }

    return 0;
}