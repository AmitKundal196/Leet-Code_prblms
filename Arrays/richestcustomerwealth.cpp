#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int maxi = 0;

        // Traverse each customer
        for (int i = 0; i < accounts.size(); i++) {

            int sum = 0;

            // Calculate wealth of current customer
            for (int j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];
            }

            // Update maximum wealth
            maxi = max(maxi, sum);
        }

        return maxi;
    }
};

int main() {

    // Test Case
    vector<vector<int>> accounts = {
        {1, 2, 3},
        {3, 2, 1}
    };

    Solution obj;

    int ans = obj.maximumWealth(accounts);

    cout << "Maximum Wealth = " << ans << endl;

    return 0;
}