#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n); // Use long long for large values
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    long long moves = 0; // Use long long to avoid overflow

    // Iterate through the array starting from the second element
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            // If the current element is less than the previous, calculate the difference
            moves += arr[i - 1] - arr[i];
            // Update the current element to make the sequence increasing
            arr[i] = arr[i - 1];
        }
    }

    cout << moves << endl;

    return 0;
}
