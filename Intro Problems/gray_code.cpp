#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to generate Gray code sequence of n bits
vector<string> generateGrayCode(int n) {
    if (n == 0) return {""};
    if (n == 1) return {"0", "1"};

    // Recursive call to generate Gray code for n-1 bits
    vector<string> prevGrayCode = generateGrayCode(n - 1);
    vector<string> grayCode;

    // Prepend "0" to the first half
    for (const string& code : prevGrayCode) {
        grayCode.push_back("0" + code);
    }

    // Prepend "1" to the reversed second half
    for (auto it = prevGrayCode.rbegin(); it != prevGrayCode.rend(); ++it) {
        grayCode.push_back("1" + *it);
    }

    return grayCode;
}

int main() {
    int n;
    cin >> n;

    vector<string> grayCode = generateGrayCode(n);
    for (const string& code : grayCode) {
        cout << code << endl;
    }

    return 0;
}
