#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        // Stores {element, last index}
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            // Check if element already exists
            if (mp.count(nums[i])) {

                // Check index difference
                if (i - mp[nums[i]] <= k) {
                    return true;
                }
            }

            // Update latest index of the element
            mp[nums[i]] = i;
        }

        return false;
    }
};

int main() {

    // Test Case
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;

    Solution obj;

    if (obj.containsNearbyDuplicate(nums, k))
        cout << "True";
    else
        cout << "False";

    return 0;
}