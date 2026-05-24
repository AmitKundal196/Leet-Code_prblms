#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int start = 0, end = nums.size() - 1, sum;

        while (start < end) {
            sum = nums[start] + nums[end];

            if (sum == target) {
                ans.push_back(start + 1);
                ans.push_back(end + 1);
                return ans;
            }
            else if (sum < target) {
                start++;
            }
            else {
                end--;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = obj.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: ";
        for (int x : result) {
            cout << x << " ";
        }
    }
    else {
        cout << "No pair found";
    }

    return 0;
}