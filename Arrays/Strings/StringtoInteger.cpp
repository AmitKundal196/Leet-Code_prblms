#include <iostream>
#include <string>
#include <climits>
#include <cctype>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        long long num = 0;
        int i = 0;

        // Skip leading spaces
        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        // Check sign
        if (i < s.size() && s[i] == '-') {
            sign = -1;
            i++;
        } 
        else if (i < s.size() && s[i] == '+') {
            sign = 1;
            i++;
        }

        // Read digits
        while (i < s.size() && isdigit(s[i])) {
            int digit = s[i] - '0';

            num = num * 10 + digit;

            if (sign == 1 && num > INT_MAX) {
                return INT_MAX;
            }

            if (sign == -1 && -num < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return sign * num;
    }
};

int main() {
    Solution obj;

    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Converted Integer: " << obj.myAtoi(s) << endl;

    return 0;
}