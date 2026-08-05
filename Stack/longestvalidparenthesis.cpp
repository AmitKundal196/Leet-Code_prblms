#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {

        stack<int> st;

        // Base index
        st.push(-1);

        int max_len = 0;

        for (int i = 0; i < s.length(); i++) {

            // Opening bracket -> push its index
            if (s[i] == '(') {
                st.push(i);
            }

            // Closing bracket
            else {

                // Remove matching opening bracket
                st.pop();

                // If stack becomes empty,
                // current ')' becomes new base
                if (st.empty()) {
                    st.push(i);
                }

                // Calculate valid parentheses length
                else {
                    max_len = max(max_len, i - st.top());
                }
            }
        }

        return max_len;
    }
};

int main() {

    // Test Case
    string s = ")()())";

    Solution obj;

    int ans = obj.longestValidParentheses(s);

    cout << "Longest Valid Parentheses Length = " << ans << endl;

    return 0;
}