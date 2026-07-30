#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        vector<int> ans;

        // Check every element
        for (int i = 0; i < nums.size(); i++) {

            int count = 0;

            // Compare it with every other element
            for (int j = 0; j < nums.size(); j++) {

                if (nums[j] < nums[i]) {
                    count++;
                }
            }

            ans.push_back(count);
        }

        return ans;
    }
};

int main() {

    // Test Case
    vector<int> nums = {8, 1, 2, 2, 3};

    Solution obj;

    vector<int> ans = obj.smallerNumbersThanCurrent(nums);

    cout << "Answer: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}