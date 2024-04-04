#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

// Function to efficiently compute (base^exponent) % MOD
long long modPow(long long base, int exponent, int modulus) {
    long long result = 1;
    base %= modulus;
    while (exponent > 0) {
        if (exponent % 2 == 1) // If exponent is odd, multiply the result by base
            result = (result * base) % modulus;
        exponent >>= 1; // Divide the exponent by 2
        base = (base * base) % modulus; // Square the base
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    // Compute 2^n modulo 10^9 + 7
    cout << modPow(2, n, MOD) << endl;

    return 0;
}
