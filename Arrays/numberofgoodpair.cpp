#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        unordered_map<int, int> mp;
        int count = 0;

        for (int val : nums) {

            // Add number of previous occurrences
            // of val to the good-pair count
            count += mp[val];

            // Increase frequency of val
            mp[val]++;
        }

        return count;
    }
};

int main() {

    // Test Case
    vector<int> nums = {1, 2, 3, 1, 1, 3};

    Solution obj;

    cout << "Number of Good Pairs = "
         << obj.numIdenticalPairs(nums) << endl;

    return 0;
}
