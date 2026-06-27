#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    static bool cmp(pair<char, int>& a, pair<char, int>& b) {
        return a.second > b.second;
    }

    string frequencySort(string s) {

        string result = "";
        unordered_map<char, int> mp;

        for (char ch : s) {
            mp[ch]++;
        }

        vector<pair<char, int>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), cmp);

        for (auto it : vec) {
            int freq = it.second;

            while (freq > 0) {
                result += it.first;
                freq--;
            }
        }

        return result;
    }
};

int main() {
    Solution obj;

    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "Sorted by frequency: " << obj.frequencySort(s) << endl;

    return 0;
}