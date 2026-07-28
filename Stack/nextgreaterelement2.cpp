#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n = nums.size();

        stack<int> st;
        vector<int> ans(n, -1);

        // Traverse twice from right to left
        for (int i = 2 * n - 1; i >= 0; i--) {

            int current = nums[i % n];

            // Remove all smaller or equal elements
            while (!st.empty() && st.top() <= current) {
                st.pop();
            }

            // Fill answer only during the first pass
            if (i < n) {
                if (!st.empty()) {
                    ans[i] = st.top();
                }
            }

            // Push current element
            st.push(current);
        }

        return ans;
    }
};

int main() {

    // Test Case
    vector<int> nums = {1, 2, 1};

    Solution obj;

    vector<int> ans = obj.nextGreaterElements(nums);

    cout << "Next Greater Elements: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}