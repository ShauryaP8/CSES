#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    // Sort the string to start with the lexicographically smallest permutation
    sort(s.begin(), s.end());
 
    // Use a set to store unique permutations in sorted order
    set<string> permutations;
 
    // Generate all unique permutations
    do {
        permutations.insert(s);
    } while (next_permutation(s.begin(), s.end()));
 
    // Print the number of unique permutations
    cout << permutations.size() << endl;
 
    // Print each permutation
    for (const auto& perm : permutations) {
        cout << perm << endl;
    }
 
    return 0;
}
