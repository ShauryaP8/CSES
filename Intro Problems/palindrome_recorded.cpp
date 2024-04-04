#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> count(26, 0); // Count of each character
    for (char c : s) {
        count[c - 'A']++;
    }

    int oddCount = 0;
    char oddChar;
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            oddCount++;
            oddChar = 'A' + i;
        }
    }

    if (oddCount > 1 || (oddCount == 1 && s.size() % 2 == 0)) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string firstHalf = "", secondHalf = "";
    for (int i = 0; i < 26; i++) {
        string temp(count[i] / 2, 'A' + i);
        firstHalf += temp;
        secondHalf = temp + secondHalf; // Ensure symmetry by adding to the front
    }

    string palindrome = firstHalf + (oddCount == 1 ? string(1, oddChar) : "") + secondHalf;
    cout << palindrome << endl;

    return 0;
}
