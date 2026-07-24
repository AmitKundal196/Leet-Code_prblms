#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string str) {

        // =====================================================
        // BRUTE FORCE APPROACH
        // =====================================================

        // while (true) {
        //     int len = str.length();
        //     size_t pos;

        //     if ((pos = str.find("()")) != string::npos)
        //         str.erase(pos, 2);
        //     else if ((pos = str.find("{}")) != string::npos)
        //         str.erase(pos, 2);
        //     else if ((pos = str.find("[]")) != string::npos)
        //         str.erase(pos, 2);

        //     if (str.length() == len)
        //         break;
        // }

        // if (str.length() == 0)
        //     return true;
        // else
        //     return false;



        // =====================================================
        // OPTIMAL APPROACH (Using Stack)
        // =====================================================

        stack<char> st;

        for (int i = 0; i < str.size(); i++) {

            // Opening brackets
            if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
                st.push(str[i]);
            }

            // Closing brackets
            else {

                if (st.empty()) {
                    return false;
                }

                if ((st.top() == '(' && str[i] == ')') ||
                    (st.top() == '{' && str[i] == '}') ||
                    (st.top() == '[' && str[i] == ']')) {

                    st.pop();
                }
                else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main() {

    // Test Case
    string str = "{[()]}";

    Solution obj;

    if (obj.isValid(str))
        cout << "Valid Parentheses";
    else
        cout << "Invalid Parentheses";

    return 0;
}