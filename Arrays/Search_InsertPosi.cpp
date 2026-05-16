#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n = nums.size();

        int start = 0;
        int end = n - 1;

        while(start <= end) {

            int mid = start + (end - start) / 2;

            if(nums[mid] == target) {
                return mid;
            }

            else if(target < nums[mid]) {
                end = mid - 1;
            }

            else {
                start = mid + 1;
            }
        }

        return start;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {1, 3, 5, 6};

    int target = 2;

    int ans = obj.searchInsert(nums, target);

    cout << "Insert Position = " << ans;

    return 0;
}