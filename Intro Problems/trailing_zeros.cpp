#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long count = 0;
    // Start with 5, and go up by powers of 5: 5, 25, 125, ...
    for (long long i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }

    cout << count << endl;

    return 0;
}
