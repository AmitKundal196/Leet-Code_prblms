#include <iostream>
#include <string>
using namespace std;

bool isAlphaNumer(char ch) {
    if ((ch >= '0' && ch <= '9') ||
        (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
        return true;
    }
    return false;
}

bool isPalindrome(string s) {
    int start = 0;
    int end = s.size() - 1;

    while (start < end) {
        if (!isAlphaNumer(s[start])) {
            start++;
            continue;
        }

        if (!isAlphaNumer(s[end])) {
            end--;
            continue;
        }

        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }

        start++;
        end--;
    }

    return true;
}

int main() {
    string s;

    cout << "Enter string: ";
    getline(cin, s);

    if (isPalindrome(s))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}