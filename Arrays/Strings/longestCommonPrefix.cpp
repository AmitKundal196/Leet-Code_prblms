#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        string first = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(first) != 0) {
                first.pop_back();

                if (first.empty()) {
                    return "";
                }
            }
        }

        return first;
    }
};

int main() {
    vector<string> strs = {"flower", "flow", "flight"};

    Solution obj;
    cout << "Longest Common Prefix: "
         << obj.longestCommonPrefix(strs);

    return 0;
}