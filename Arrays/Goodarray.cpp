#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isGood(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size() - 1; i++) {
        if(nums[i] != i + 1)
            return false;
    }

    return nums.back() == nums.size() - 1;
}

int main() {
    vector<int> nums = {2, 1, 3, 3};

    cout << isGood(nums);

    return 0;
}