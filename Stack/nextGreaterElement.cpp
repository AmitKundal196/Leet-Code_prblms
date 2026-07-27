#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> mp;
        vector<int> ans;

        // Traverse nums2 from right to left using a monotonic stack
        for (int i = nums2.size() - 1; i >= 0; i--) {
            int current = nums2[i];
            
            while (!st.empty() && st.top() <= current) {
                st.pop();
            }
            
            if (st.empty()) {
                mp[current] = -1;
            } else {
                mp[current] = st.top();
            }
            
            st.push(current);
        }

        // Map results back to nums1 order
        for (int val : nums1) {
            ans.push_back(mp[val]);
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Example Test Case
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    vector<int> result = sol.nextGreaterElement(nums1, nums2);

    // Print the output
    cout << "Output: [";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i] << (i < result.size() - 1 ? ", " : "");
    }
    cout << "]" << endl;

    return 0;
}