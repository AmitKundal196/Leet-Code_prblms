#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int count = 0;

        for (int i = 0; i < nums.size(); i++) {

            long long product = 1;

            for (int j = i; j < nums.size(); j++) {

                product *= nums[j];

                if (product < k) {
                    count++;
                }
                else {
                    break;
                }
            }
        }

        return count;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {10, 5, 2, 6};
    int k = 100;

    cout << "Number of subarrays = "
         << obj.numSubarrayProductLessThanK(nums, k);

    return 0;
}