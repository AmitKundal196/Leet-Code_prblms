#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.length() > 0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    string s, part;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter part to remove: ";
    cin >> part;

    Solution obj;
    cout << "Result: " << obj.removeOccurrences(s, part) << endl;

    return 0;
}