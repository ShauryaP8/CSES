#include <iostream>
using namespace std;
 
int main() {
    int q;
    cin >> q;
 
    while (q--) {
        long long k;
        cin >> k;
 
        long long length = 1; // Length of numbers contributing to position k
        long long count = 9; // Count of numbers at the current length
        long long start = 1; // Start of numbers of the current length
 
        // Find the length of the number containing the kth digit
        while (k > length * count) {
            k -= length * count;
            length++;
            count *= 10;
            start *= 10;
        }
 
        // Find the exact number and the digit within that number
        start += (k - 1) / length;
        string number = to_string(start);
        cout << number[(k - 1) % length] << endl;
    }
 
    return 0;
}
