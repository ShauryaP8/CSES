#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<long long> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
 
    long long minDiff = LLONG_MAX; // Initialize minimum difference as maximum possible value
 
    // Generate all subsets using bit manipulation
    for (int mask = 0; mask < (1 << n); ++mask) {
        long long weightGroup1 = 0, weightGroup2 = 0;
 
        // Divide apples into two groups based on the current subset
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) { // If the i-th bit is set, apple i belongs to group 1
                weightGroup1 += p[i];
            } else { // Otherwise, it belongs to group 2
                weightGroup2 += p[i];
            }
        }
 
        // Update the minimum difference
        long long currentDiff = abs(weightGroup1 - weightGroup2);
        minDiff = min(minDiff, currentDiff);
    }
 
    cout << minDiff << endl; // Output the minimum difference
 
    return 0;
}
