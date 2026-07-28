#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operation) {

        stack<int> st;

        for (int i = 0; i < operation.size(); i++) {

            // Remove the previous score
            if (operation[i] == "C") {
                st.pop();
            }

            // Double the previous score
            else if (operation[i] == "D") {
                int last = st.top();
                st.push(last * 2);
            }

            // Sum of the previous two scores
            else if (operation[i] == "+") {

                int first = st.top();
                st.pop();

                int second = st.top();

                // Restore the first score
                st.push(first);

                // Push the new score
                st.push(first + second);
            }

            // Normal integer score
            else {
                st.push(stoi(operation[i]));
            }
        }

        // Calculate total score
        int sum = 0;

        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};

int main() {

    // Test Case
    vector<string> operation = {"5", "2", "C", "D", "+"};

    Solution obj;

    cout << "Total Score = "
         << obj.calPoints(operation) << endl;

    return 0;
}