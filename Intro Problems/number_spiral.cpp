#include <iostream>
using namespace std;
 
long long numberAtPosition(long long y, long long x) {
    long long maxVal = max(y, x);
    long long layerStartNum = (maxVal - 1) * (maxVal - 1);
    long long num;
 
    if (maxVal % 2 == 0) {
        if (x == maxVal) {
            num = layerStartNum + y;
        } else { // y < x and x is the maximum value in an even layer
            num = layerStartNum + 2 * maxVal - x;
        }
    } else {
        if (y == maxVal) {
            num = layerStartNum + x;
        } else { // x < y and y is the maximum value in an odd layer
            num = layerStartNum + 2 * maxVal - y;
        }
    }
 
    return num;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long y, x;
        cin >> y >> x;
        cout << numberAtPosition(y, x) << endl;
    }
 
    return 0;
}
