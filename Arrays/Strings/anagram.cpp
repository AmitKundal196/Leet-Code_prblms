#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size())
            return false;

        unordered_map<char, int> mp;

        for (char ch : s) {
            mp[ch]++;
        }

        for (char ch : t) {
            mp[ch]--;
        }

        for (auto it : mp) {
            if (it.second != 0)
                return false;
        }

        return true;
    }
};

int main() {
    Solution obj;

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (obj.isAnagram(s, t))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}