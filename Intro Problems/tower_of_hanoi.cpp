#include <iostream>
#include <vector>
using namespace std;

// A utility function to print a move
void printMove(int fromPeg, int toPeg) {
    cout << fromPeg << " " << toPeg << endl;
}

// The recursive function to print the solution
void towerOfHanoi(int n, int fromPeg, int toPeg, int auxPeg, vector<pair<int, int>>& moves) {
    if (n == 0) return; // Base case
    // Move top n-1 disks from A to B, using C as auxiliary
    towerOfHanoi(n - 1, fromPeg, auxPeg, toPeg, moves);
    // Move remaining disks from A to C
    moves.push_back({fromPeg, toPeg});
    // Move n-1 disks from B to C using A as auxiliary
    towerOfHanoi(n - 1, auxPeg, toPeg, fromPeg, moves);
}

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> moves;
    towerOfHanoi(n, 1, 3, 2, moves);
    
    cout << moves.size() << endl;
    for (const auto& move : moves) {
        printMove(move.first, move.second);
    }
    
    return 0;
}
