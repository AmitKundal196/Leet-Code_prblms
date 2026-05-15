#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            for(int j = i + 1; j < n; j++) {

                if(nums[i] > nums[j]) {

                    swap(nums[i], nums[j]);
                }
            }
        }
    }
};

int main() {

    vector<int> nums = {2,0,2,1,1,0};

    Solution obj;
    obj.sortColors(nums);

    cout << "Sorted Array: ";

    for(int val : nums) {
        cout << val << " ";
    }

    return 0;
} 