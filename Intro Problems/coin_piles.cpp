#include <iostream>
using namespace std;

string canEmptyPiles(int a, int b) {
    // Total sum condition: (a + b) must be divisible by 3
    // Difference condition: neither pile should have more than double the coins of the other
    if ((a + b) % 3 == 0 && min(a, b) * 2 >= max(a, b)) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << canEmptyPiles(a, b) << endl;
    }
    return 0;
}
