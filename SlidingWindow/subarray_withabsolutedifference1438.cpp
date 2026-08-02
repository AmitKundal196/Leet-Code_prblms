#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {

        int n = nums.size();

        int i = 0;
        int j = 0;
        int maxi = 0;

        // Stores all elements of current window in sorted order
        multiset<int> window;

        while (j < n) {

            // Add current element to window
            window.insert(nums[j]);

            // If window becomes invalid
            // max - min > limit
            while (*window.rbegin() - *window.begin() > limit) {

                // Remove leftmost element from window
                window.erase(window.find(nums[i]));

                // Shrink window from left
                i++;
            }

            // Current valid window size
            maxi = max(maxi, j - i + 1);

            // Expand window
            j++;
        }

        return maxi;
    }
};

int main() {

    // Test Case
    vector<int> nums = {8, 2, 4, 7};
    int limit = 4;

    Solution obj;

    int ans = obj.longestSubarray(nums, limit);

    cout << "Longest Subarray Length = " << ans << endl;

    return 0;
}