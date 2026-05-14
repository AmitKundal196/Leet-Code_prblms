#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> ans(nums.size());

        int pos = 0;
        int neg = 1;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] > 0) {
                ans[pos] = nums[i];
                pos = pos + 2;
            }
            else {
                ans[neg] = nums[i];
                neg = neg + 2;
            }
        }

        return ans;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> result = obj.rearrangeArray(nums);

    cout << "Rearranged Array: ";

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}