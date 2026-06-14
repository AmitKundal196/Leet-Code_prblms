#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int count = 0;

    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] != ' ')
            count++;
        else if (count > 0)
            break;
    }

    return count;
}

int main() {
    string s;

    cout << "Enter string: ";
    getline(cin, s);

    cout << "Length of last word = " << lengthOfLastWord(s);

    return 0;
}