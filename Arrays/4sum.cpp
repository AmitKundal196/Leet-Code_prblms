#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> ans;
        int n = nums.size();

        // Sort the array
        sort(nums.begin(), nums.end());

        // Fix the first element
        for (int i = 0; i < n - 3; i++) {

            // Skip duplicate first elements
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            // Fix the second element
            for (int j = i + 1; j < n - 2; j++) {

                // Skip duplicate second elements
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                int start = j + 1;
                int end = n - 1;

                // Two-pointer approach
                while (start < end) {

                    long long sum = (long long)nums[i] +
                                    nums[j] +
                                    nums[start] +
                                    nums[end];

                    if (sum == target) {

                        ans.push_back({nums[i], nums[j], nums[start], nums[end]});

                        start++;
                        end--;

                        // Skip duplicate third elements
                        while (start < end && nums[start] == nums[start - 1])
                            start++;

                        // Skip duplicate fourth elements
                        while (start < end && nums[end] == nums[end + 1])
                            end--;
                    }
                    else if (sum < target) {
                        start++;
                    }
                    else {
                        end--;
                    }
                }
            }
        }

        return ans;
    }
};

int main() {

    // Test Case
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    Solution obj;

    vector<vector<int>> ans = obj.fourSum(nums, target);

    cout << "Quadruplets are:\n";

    for (auto quad : ans) {
        cout << "[ ";
        for (int x : quad) {
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}