#include <iostream>
#include <vector>
using namespace std;
 
const int N = 8;
vector<vector<char>> board(N, vector<char>(N));
int solutions = 0;
 
bool isSafe(int row, int col) {
    // Check this row on left side
    for (int i = 0; i < col; i++)
        if (board[row][i] == 'Q')
            return false;
 
    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 'Q')
            return false;
 
    // Check lower diagonal on left side
    for (int i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j] == 'Q')
            return false;
 
    return true;
}
 
void solve(int col) {
    if (col == N) {
        solutions++;
        return;
    }
 
    // Try placing this queen in all rows one by one
    for (int i = 0; i < N; i++) {
        // Check if queen can be placed on board[i][col]
        if (board[i][col] == '.' && isSafe(i, col)) {
            // Place this queen in board[i][col]
            board[i][col] = 'Q';
 
            // Recur to place rest of the queens
            solve(col + 1);
 
            // If placing queen in board[i][col] leads to a solution, return true
            // If placing queen doesn't lead to a solution, then remove queen from board[i][col]
            board[i][col] = '.';
        }
    }
}
 
int main() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> board[i][j];
 
    solve(0); // Start placing queens from the first column
 
    cout << solutions << endl;
    return 0;
}
