#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Check if division is possible
    if (((n * (n + 1)) / 2) % 2 != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        vector<int> set1, set2;
        int turn = 0;

        if (n % 4 == 0) {
            // If n mod 4 equals 0, distribute numbers starting from 1, 4, 5, 8...
            for (int i = 1; i <= n; i++) {
                if (turn == 0 || turn == 3) {
                    set1.push_back(i);
                } else {
                    set2.push_back(i);
                }
                turn = (turn + 1) % 4;
            }
        } else {
            // If n mod 4 equals 3, distribute numbers with slight adjustment
            for (int i = 1; i <= n; i++) {
                if (i % 4 == 0 || i % 4 == 3) {
                    set2.push_back(i);
                } else {
                    set1.push_back(i);
                }
            }
        }

        // Print set1
        cout << set1.size() << "\n";
        for (int num : set1) {
            cout << num << " ";
        }
        cout << "\n";

        // Print set2
        cout << set2.size() << "\n";
        for (int num : set2) {
            cout << num << " ";
        }
        cout << "\n";
    }
    return 0;
}
