#include <iostream>
using namespace std;

int main() {
    long long n; // Using long long to avoid overflow
    cin >> n;

    // Print the initial value of n
    cout << n;

    // Continue the loop until n becomes 1
    while (n != 1) {
        if (n % 2 == 0) {
            // If n is even, divide it by 2
            n /= 2;
        } else {
            // If n is odd, multiply by 3 and add 1
            n = n * 3 + 1;
        }
        // Print the current value of n
        cout << " " << n;
    }

    // Print a newline at the end (optional, depending on platform)
    cout << endl;

    return 0;
}
