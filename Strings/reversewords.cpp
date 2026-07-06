#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {

        string temp = "";
        int i = s.size() - 1;

        while (i >= 0) {

            // Skip extra spaces
            while (i >= 0 && s[i] == ' ') {
                i--;
            }

            if (i < 0)
                break;

            int end = i;

            // Find the start of the current word
            while (i >= 0 && s[i] != ' ') {
                i--;
            }

            int start = i + 1;

            if (!temp.empty()) {
                temp += ' ';
            }

            // Append the word
            for (int j = start; j <= end; j++) {
                temp += s[j];
            }
        }

        return temp;
    }
};

int main() {

    Solution obj;

    string s = "  the sky   is blue  ";

    cout << "Original String: \"" << s << "\"" << endl;

    string ans = obj.reverseWords(s);

    cout << "Reversed Words: \"" << ans << "\"" << endl;

    return 0;
}