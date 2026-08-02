#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int ans = 0;
        int left = 0;
        int right = 0;

        unordered_map<char, int> mp;

        int n = s.size();

        while (right < n) {

            // Add current character into window
            mp[s[right]]++;

            // If duplicate is present, shrink window
            while (mp[s[right]] > 1) {

                // Remove left character
                mp[s[left]]--;

                // Move left pointer
                left++;
            }

            // Current valid window size
            int current = right - left + 1;

            // Update maximum length
            ans = max(ans, current);

            // Expand window
            right++;
        }

        return ans;
    }
};

int main() {

    // Test Case
    string s = "abcabcbb";

    Solution obj;

    int ans = obj.lengthOfLongestSubstring(s);

    cout << "Longest Substring Length = " << ans << endl;

    return 0;
}