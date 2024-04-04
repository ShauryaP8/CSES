#include <iostream>
using namespace std;

int main() {
    long long n; // Use long long to handle large values of n
    cin >> n;

    long long sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        long long number;
        cin >> number;
        sum += number;
    }

    // Calculate the total sum of numbers from 1 to n
    long long totalSum = n * (n + 1) / 2;

    // The missing number is the difference between the total sum and the sum of given numbers
    cout << totalSum - sum << endl;

    return 0;
}
