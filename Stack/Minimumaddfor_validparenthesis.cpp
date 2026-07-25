#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {

        stack<char> st;
        int count = 0;

        // Traverse the string
        for (int i = 0; i < s.size(); i++) {

            // Opening bracket
            if (s[i] == '(') {
                st.push(s[i]);
            }

            // Closing bracket
            else {

                // Matching opening bracket exists
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                }

                // Unmatched closing bracket
                else {
                    count++;
                }
            }
        }

        // Add remaining unmatched opening brackets
        count += st.size();

        return count;
    }
};

int main() {

    // Test Case
    string s = "()))((";

    Solution obj;

    cout << "Minimum Additions Required: "
         << obj.minAddToMakeValid(s) << endl;

    return 0;
}