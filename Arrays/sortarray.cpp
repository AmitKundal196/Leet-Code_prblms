#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    // Merge two sorted halves
    void merge(vector<int>& nums, int l, int mid, int r) {

        vector<int> ans;

        int i = l;
        int j = mid + 1;

        // Compare elements from both halves
        while (i <= mid && j <= r) {

            if (nums[i] <= nums[j]) {
                ans.push_back(nums[i]);
                i++;
            }
            else {
                ans.push_back(nums[j]);
                j++;
            }
        }

        // Copy remaining elements from left half
        while (i <= mid) {
            ans.push_back(nums[i]);
            i++;
        }

        // Copy remaining elements from right half
        while (j <= r) {
            ans.push_back(nums[j]);
            j++;
        }

        // Copy merged array back into original array
        for (int k = l; k <= r; k++) {
            nums[k] = ans[k - l];
        }
    }

    // Merge Sort Function
    void mergeSort(vector<int>& nums, int l, int r) {

        // Base Case
        if (l >= r)
            return;

        int mid = (l + r) / 2;

        // Sort left half
        mergeSort(nums, l, mid);

        // Sort right half
        mergeSort(nums, mid + 1, r);

        // Merge both halves
        merge(nums, l, mid, r);
    }

    vector<int> sortArray(vector<int>& nums) {

        mergeSort(nums, 0, nums.size() - 1);

        return nums;
    }
};

int main() {

    // Test Case
    vector<int> nums = {5, 2, 3, 1};

    Solution obj;

    vector<int> ans = obj.sortArray(nums);

    cout << "Sorted Array: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}