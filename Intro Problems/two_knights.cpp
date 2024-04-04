#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int k = 1; k <= n; ++k) {
        long long totalPlacements = (long long)k * k * (k * k - 1) / 2;
        long long attackingPlacements = 4 * (k - 1) * (k - 2);
        cout << totalPlacements - attackingPlacements << endl;
    }

    return 0;
}
