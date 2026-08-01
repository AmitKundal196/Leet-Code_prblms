#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        // Edge case: empty array
        if (nums.size() == 0) {
            return 0;
        }

        // Sort the array
        sort(nums.begin(), nums.end());

        int longest = 1;
        int count = 1;

        for (int i = 1; i < nums.size(); i++) {

            // If current number is consecutive
            if (nums[i] == nums[i - 1] + 1) {
                count++;
            }

            // If duplicate, ignore it
            else if (nums[i] == nums[i - 1]) {
                continue;
            }

            // Consecutive sequence breaks
            else {
                count = 1;
            }

            // Update longest sequence
            longest = max(longest, count);
        }

        return longest;
    }
};

int main() {

    // Test Case
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    Solution obj;

    int ans = obj.longestConsecutive(nums);

    cout << "Longest Consecutive Sequence Length: " << ans << endl;

    return 0;
}