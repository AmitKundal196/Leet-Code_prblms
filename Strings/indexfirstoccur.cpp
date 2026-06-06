#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    int find = haystack.find(needle);

    if (find < haystack.length()) {
        return find;
    }

    return -1;
}

int main() {
    string haystack, needle;

    cout << "Enter haystack: ";
    cin >> haystack;

    cout << "Enter needle: ";
    cin >> needle;

    cout << strStr(haystack, needle) << endl;

    return 0;
}