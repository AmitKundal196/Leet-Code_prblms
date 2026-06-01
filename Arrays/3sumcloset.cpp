#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = nums[0] + nums[1] + nums[2];

        for(int i = 0; i < n - 2; i++) {
            for(int j = i + 1; j < n - 1; j++) {
                for(int k = j + 1; k < n; k++) {
                    int X = nums[i] + nums[j] + nums[k];

                    if(abs(X - target) < abs(sum - target)) {
                        sum = X;
                    }
                }
            }
        }

        return sum;
    }
};

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    Solution obj;
    cout << obj.threeSumClosest(nums, target);

    return 0;
}