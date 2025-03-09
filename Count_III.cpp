#include <iostream>
#include <string>
using namespace std;

void countLetters(const string& S) {
    // Create an array to store counts for each letter (26 letters)
    int count[26] = {0};  // Initialize all counts to 0

    // Traverse the string and update the count for each letter
    for (char ch : S) {
        count[ch - 'a']++;  // Increment the count of the corresponding letter
    }

    // Output the count for each letter from 'a' to 'z'
    for (int i = 0; i < 26; ++i) {
        cout << char(i + 'a') << " - " << count[i] << endl;
    }
}

int main() {
    string S;
    cin >> S;  // Read input string
    countLetters(S);
    return 0;
}
