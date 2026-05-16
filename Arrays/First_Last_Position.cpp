#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int start = 0;
        int end = nums.size() - 1;

        int first = -1;
        int last = -1;
        int mid;

        // First occurrence
        while(start <= end) {

            mid = start + (end - start) / 2;

            if(nums[mid] == target) {

                first = mid;
                end = mid - 1;
            }

            else if(target < nums[mid]) {

                end = mid - 1;
            }

            else {

                start = mid + 1;
            }
        }

        start = 0;
        end = nums.size() - 1;

        // Last occurrence
        while(start <= end) {

            mid = start + (end - start) / 2;

            if(nums[mid] == target) {

                last = mid;
                start = mid + 1;
            }

            else if(target < nums[mid]) {

                end = mid - 1;
            }

            else {

                start = mid + 1;
            }
        }

        vector<int> A(2);

        A[0] = first;
        A[1] = last;

        return A;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {5, 7, 7, 8, 8, 10};

    int target = 8;

    vector<int> ans = obj.searchRange(nums, target);

    cout << "First Position = " << ans[0] << endl;
    cout << "Last Position = " << ans[1] << endl;

    return 0;
}