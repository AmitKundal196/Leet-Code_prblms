#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int max = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                count++;
            }

            if (max < count) {
                max = count;
            }

            if (s[i] == ')') {
                count--;
            }
        }

        return max;
    }
};

int main() {
    Solution obj;

    string s;

    cout << "Enter the string: ";
    cin >> s;

    cout << "Maximum Depth: " << obj.maxDepth(s) << endl;

    return 0;
}