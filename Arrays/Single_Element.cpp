#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while(start < end) {

            int mid = start + (end - start) / 2;

            if(mid % 2 == 1) {
                mid--;
            }

    
            if(nums[mid] == nums[mid + 1]) {
                start = mid + 2;
            }
            else {
                end = mid;
            }
        }

        return nums[start];
    }
};

int main() {

    vector<int> nums = {1,1,2,3,3,4,4,8,8};

    Solution obj;

    cout << "Single Element: " << obj.singleNonDuplicate(nums);

    return 0;
}