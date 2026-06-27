#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    static bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second)
            return a.first > b.first;

        return a.second < b.second;
    }

    vector<int> frequencySort(vector<int>& nums) {
        vector<int> result;
        unordered_map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
        }

        vector<pair<int, int>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), cmp);

        for (auto it : vec) {
            int freq = it.second;

            while (freq > 0) {
                result.push_back(it.first);
                freq--;
            }
        }

        return result;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = obj.frequencySort(nums);

    cout << "Frequency Sorted Array: ";
    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}