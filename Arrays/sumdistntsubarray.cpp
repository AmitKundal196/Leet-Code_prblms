#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        long long sum = 0;
        long long ans = 0;

        int left = 0;
        unordered_map<int, int> mp;

        for (int right = 0; right < nums.size(); right++) {

            sum += nums[right];
            mp[nums[right]]++;

            // Shrink window if size exceeds k
            if (right - left + 1 > k) {

                sum -= nums[left];
                mp[nums[left]]--;

                if (mp[nums[left]] == 0) {
                    mp.erase(nums[left]);
                }

                left++;
            }

            // Check window of size k
            if (right - left + 1 == k) {

                if (mp.size() == k) {
                    ans = max(ans, sum);
                }
            }
        }

        return ans;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {1, 5, 4, 2, 9, 9, 9};
    int k = 3;

    cout << "Maximum Sum = " << obj.maximumSubarraySum(nums, k);

    return 0;
}