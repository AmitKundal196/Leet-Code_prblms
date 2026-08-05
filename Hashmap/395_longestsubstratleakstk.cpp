#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestSubstring(string s, int k) {

        unordered_map<char, int> mp;

        // Base case
        if (s.size() < k) {
            return 0;
        }

        // Count frequency of every character
        for (char ch : s) {
            mp[ch]++;
        }

        // Find a character whose frequency is less than k
        for (int i = 0; i < s.size(); i++) {

            if (mp[s[i]] < k) {

                // Divide string into left and right parts
                int left = longestSubstring(
                    s.substr(0, i), k
                );

                int right = longestSubstring(
                    s.substr(i + 1), k
                );

                // Return the bigger valid substring
                return max(left, right);
            }
        }

        // Every character appears at least k times
        return s.size();
    }
};

int main() {

    string s = "aaabb";
    int k = 3;

    Solution obj;

    cout << "Longest Substring Length = "
         << obj.longestSubstring(s, k) << endl;

    return 0;
}