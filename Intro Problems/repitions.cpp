#include <iostream>
#include <string>
using namespace std;

int main() {
    string dna;
    cin >> dna;

    int maxLength = 1; // Initialize the maximum length to at least 1
    int currentLength = 1; // Initialize the current repeating character length to 1

    // Loop through the DNA sequence starting from the second character
    for (int i = 1; i < dna.size(); ++i) {
        if (dna[i] == dna[i - 1]) {
            // If the current character is the same as the previous one, increase the current length
            ++currentLength;
            // Update the maximum length if the current length is greater
            maxLength = max(maxLength, currentLength);
        } else {
            // If the current character is different, reset the current length to 1
            currentLength = 1;
        }
    }

    // In case the sequence is of length 1 or all characters are the same, ensure a minimum length of 1
    cout << maxLength << endl;

    return 0;
}
