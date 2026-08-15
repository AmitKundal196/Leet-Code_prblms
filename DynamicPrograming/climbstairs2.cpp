#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size();

        // dp[i] = minimum cost required to reach step i
        vector<int> dp(n);

        // Base cases
        dp[0] = cost[0];
        dp[1] = cost[1];

        // Calculate minimum cost for every step
        for (int i = 2; i < n; i++) {

            // We can reach i from either i-1 or i-2
            dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i];
        }

        // We can reach the top from either
        // the last step or second-last step
        return min(dp[n - 1], dp[n - 2]);
    }
};

int main() {

    vector<int> cost = {10, 15, 20};

    Solution obj;

    cout << "Minimum Cost: "
         << obj.minCostClimbingStairs(cost) << endl;

    return 0;
}