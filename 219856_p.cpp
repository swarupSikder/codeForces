#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    // Remove unwanted punctuation in-place
    string clean;
    for (char c : s) {
        if (isalpha(c) || c == ' ') {
            clean += c; // Keep only alphabets and spaces
        }
    }

    // Trim leading/trailing spaces
    while (!clean.empty() && clean.front() == ' ') {
        clean.erase(clean.begin());
    }
    while (!clean.empty() && clean.back() == ' ') {
        clean.pop_back();
    }

    // Count words
    stringstream ss(clean);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    cout << count << endl;

    return 0;
}
