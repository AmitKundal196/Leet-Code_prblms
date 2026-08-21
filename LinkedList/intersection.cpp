#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> mp;
        vector<int> ans;

        for(int x : nums1) {
            mp[x]++;
        }

        for(int x : nums2) {
            if(mp[x] > 0) {
                ans.push_back(x);
                mp[x]--;
            }
        }

        return ans;
    }
};

int main() {

    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    Solution obj;

    vector<int> ans = obj.intersect(nums1, nums2);

    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}