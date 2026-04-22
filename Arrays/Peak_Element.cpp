#include<iostream>
#include<vector>
using namespace std;

int findPeakElement(vector<int>& nums) {

    int n = nums.size() - 1;

    int start = 0;
    int end = n;

    while(start < end) {

        int mid = start + (end - start) / 2;

        // increasing side
        if(nums[mid] < nums[mid + 1]) {
            start = mid + 1;
        }

        // decreasing side
        else {
            end = mid;
        }
    }

    return start;
}

int main() {

    vector<int> nums = {1,2,3,1};

    int ans = findPeakElement(nums);

    cout << "Peak Index = " << ans << endl;

    cout << "Peak Element = " << nums[ans];

    return 0;
}