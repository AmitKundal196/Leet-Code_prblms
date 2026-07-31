#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {

        vector<int> ans;

        // Build the new array
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[nums[i]]);
        }

        return ans;
    }
};

int main() {

    // Test Case
    vector<int> nums = {0, 2, 1, 5, 3, 4};

    Solution obj;

    vector<int> ans = obj.buildArray(nums);

    cout << "Result Array: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}