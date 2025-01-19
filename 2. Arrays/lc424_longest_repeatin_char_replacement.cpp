#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> m; // Frequency map for the current window
        int l = 0;                 // Left pointer of the sliding window
        int max_freq = 0;          // Maximum frequency of any character in the current window
        int res = 0;               // Result: longest window length

        for (int r = 0; r < s.size(); r++) {
            // Expand the window by adding the current character
            m[s[r]]++;
            max_freq = max(max_freq, m[s[r]]);

            // Shrink the window if the condition is violated
            // Window size - max_freq > k indicates that more than k replacements are needed
            while ((r - l + 1) - max_freq > k) {
                m[s[l]]--; // Remove the character at the left of the window
                l++;       // Move the left pointer
            }

            // Update the result with the maximum valid window size
            res = max(res, r - l + 1);
        }

        return res;
    }
};



int main() {
    cout << "Hello, World!" << endl;
    return 0;
}