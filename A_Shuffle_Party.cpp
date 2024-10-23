#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string longestSubstring(long long n, string s) {
    string result = "-1"; // Initialize result to "-1" by default

    // Loop through all possible lengths of substrings (from maximum to minimum)
    for (long long len = n / 2; len >= 1; len--) {
        // Loop through all possible starting indices for each length
        for (long long i = 0; i <= n - 2 * len; i++) {
            string substring = s.substr(i, len); // Extract substring starting from index i with length len
            string remaining = s.substr(i + len); // Extract the remaining string after the current substring

            // Check if the substring is repeated in the remaining string without overlap
            if (equal(substring.begin(), substring.end(), remaining.begin())) {
                return substring; // Return the repeating substring
            }
        }
    }

    return result; // Return "-1" if no repeating non-overlapping substring is found
}

long long main() {
    long long n;
   //  cin >> n;
    string s;
    cin >> s;
    n = s.size();
    string answer = longestSubstring(n, s);
    cout << answer << endl;

    return 0;
}
