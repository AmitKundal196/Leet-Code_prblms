#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    
    int count = 0;
    int maximum = 0;

    for(int i = 0; i < nums.size(); i++) {

        if(nums[i] == 1) {
            count++;
            maximum = max(count, maximum);
        }
        else {
            count = 0;
        }
    }

    return maximum;
}

int main() {

    vector<int> nums = {1, 1, 0, 1, 1, 1};

    int ans = findMaxConsecutiveOnes(nums);

    cout << "Maximum consecutive ones = " << ans;

    return 0;
}