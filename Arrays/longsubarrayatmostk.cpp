#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        int n = nums.size();
        int left = 0;
        int ans = 0;

        for (int right = 0; right < n; right++) {

            mp[nums[right]]++;

            while (mp[nums[right]] > k) {
                mp[nums[left]]--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};

int main() {

    vector<int> nums = {1, 2, 2, 3, 1, 1};
    int k = 2;

    Solution obj;

    int result = obj.maxSubarrayLength(nums, k);

    cout << "Longest subarray length: " << result << endl;

    return 0;
}