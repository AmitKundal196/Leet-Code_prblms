#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }

        return nums;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {3, 1, 2, 4};

    vector<int> result = obj.sortArrayByParity(nums);

    cout << "Sorted Array: ";

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}