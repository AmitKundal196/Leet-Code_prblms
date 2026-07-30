#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        vector<int> ans;

        // Copy the array once
        for (int val : nums) {
            ans.push_back(val);
        }

        // Copy the array again
        for (int val : nums) {
            ans.push_back(val);
        }

        return ans;
    }
};

int main() {

    // Test Case
    vector<int> nums = {1, 2, 1};

    Solution obj;

    vector<int> ans = obj.getConcatenation(nums);

    cout << "Concatenated Array: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}