#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        // Store number -> frequency
        unordered_map<int, int> mp;

        // Count frequency of each number
        for (int val : nums) {
            mp[val]++;
        }

        vector<int> ans;

        int n = nums.size();

        // Find elements occurring more than n/3 times
        for (auto it : mp) {

            if (it.second > n / 3) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};

int main() {

    // Test Case
    vector<int> nums = {1, 2, 3, 1, 1, 2, 2};

    Solution obj;

    vector<int> ans = obj.majorityElement(nums);

    cout << "Majority Elements: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}