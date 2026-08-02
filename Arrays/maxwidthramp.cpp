#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {

        int n = nums.size();

        // lmax[i] stores minimum element from 0 to i
        vector<int> lmax(n, 0);

        // rmax[i] stores maximum element from i to n-1
        vector<int> rmax(n, 0);

        lmax[0] = nums[0];
        rmax[n - 1] = nums[n - 1];

        // Build left minimum array
        for (int i = 1; i < n; i++) {
            lmax[i] = min(lmax[i - 1], nums[i]);
        }

        // Build right maximum array
        for (int i = n - 2; i >= 0; i--) {
            rmax[i] = max(rmax[i + 1], nums[i]);
        }

        // Two pointers
        int i = 0;
        int j = 0;

        int ans = 0;

        while (i < n && j < n) {

            // Valid ramp possible
            if (lmax[i] <= rmax[j]) {

                // Calculate width
                ans = max(ans, j - i);

                // Try to increase width
                j++;
            }

            else {
                i++;
            }
        }

        return ans;
    }
};

int main() {

    // Test Case
    vector<int> nums = {6, 0, 8, 2, 1, 5};

    Solution obj;

    int ans = obj.maxWidthRamp(nums);

    cout << "Maximum Width Ramp = " << ans << endl;

    return 0;
}