#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "1";
    } else if (n < 4) {
        // For n = 2 and 3, it's impossible to form a beautiful permutation
        cout << "NO SOLUTION";
    } else {
        // Print all even numbers first
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        // Then print all odd numbers
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
