#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        // Count frequency
        for (int val : nums) {
            mp[val]++;
        }

        // Store {frequency, element}
        vector<pair<int, int>> v;
        for (auto it : mp) {
            v.push_back({it.second, it.first});
        }

        // Sort in descending order of frequency
        sort(v.begin(), v.end(), greater<pair<int, int>>());

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    Solution obj;
    vector<int> ans = obj.topKFrequent(nums, k);

    cout << "Top " << k << " frequent elements: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
