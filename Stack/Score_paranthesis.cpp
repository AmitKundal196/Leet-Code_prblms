#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int scoreOfParentheses(string s) {

        // =====================================================
        // Optimal Approach (Using Stack)
        // =====================================================

        stack<int> st;

        // Base score
        st.push(0);

        for (int i = 0; i < s.size(); i++) {

            // Opening bracket
            if (s[i] == '(') {
                st.push(0);
            }

            // Closing bracket
            else {

                // Score inside current pair
                int v = st.top();
                st.pop();

                // If "()" -> score = 1
                // Else "(A)" -> score = 2 * A
                int score = max(2 * v, 1);

                // Add current score to previous level
                st.top() += score;
            }
        }

        return st.top();
    }
};

int main() {

    // Test Case
    string s = "(()(()))";

    Solution obj;

    cout << "Score of Parentheses: "
         << obj.scoreOfParentheses(s) << endl;

    return 0;
}