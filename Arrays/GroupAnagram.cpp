#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // key -> group of anagrams
        unordered_map<string, vector<string>> mp;

        for (string str : strs) {

            // Frequency of a-z
            vector<int> freq(26, 0);

            // Count frequency of each character
            for (char ch : str) {
                freq[ch - 'a']++;
            }

            // Create unique key from frequency array
            string key = "";

            for (int val : freq) {
                key += to_string(val) + "#";
            }

            // Same frequency = same key = same anagram group
            mp[key].push_back(str);
        }

        vector<vector<string>> ans;

        // Put all groups into answer
        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};

int main() {

    // Test Case
    vector<string> strs = {
        "eat", "tea", "tan", "ate", "nat", "bat"
    };

    Solution obj;

    vector<vector<string>> ans = obj.groupAnagrams(strs);

    cout << "Grouped Anagrams:" << endl;

    for (auto group : ans) {

        cout << "[ ";

        for (string str : group) {
            cout << str << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}