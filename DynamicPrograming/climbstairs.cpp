#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    // ============================================================
    // APPROACH 1: RECURSION
    // ============================================================
    //
    // Recurrence:
    // climbStairs(n) = climbStairs(n-1) + climbStairs(n-2)
    //
    // Base cases:
    // n = 1 -> 1 way
    // n = 2 -> 2 ways
    //
    // Time: O(2^n)
    // Space: O(n) -> recursion stack
    //

    int recursion(int n) {

        if (n == 1 || n == 2)
            return n;

        return recursion(n - 1) + recursion(n - 2);
    }


    // ============================================================
    // APPROACH 2: MEMOIZATION (TOP-DOWN DP)
    // ============================================================
    //
    // We use recursion but store already calculated answers
    // in the dp array.
    //
    // Time: O(n)
    // Space: O(n) -> dp array + recursion stack
    //

    int helper(int n, vector<int>& dp) {

        // Base case
        if (n == 1 || n == 2)
            return n;

        // If already calculated, return stored answer
        if (dp[n] != -1) {
            return dp[n];
        }

        // Calculate and store answer
        return dp[n] = helper(n - 1, dp) + helper(n - 2, dp);
    }

    int memoization(int n) {

        vector<int> dp(n + 1, -1);

        return helper(n, dp);
    }


    // ============================================================
    // APPROACH 3: TABULATION (BOTTOM-UP DP)
    // ============================================================
    //
    // Instead of recursion, we calculate from smaller values
    // to larger values.
    //
    // dp[i] = number of ways to reach step i
    //
    // dp[1] = 1
    // dp[2] = 2
    //
    // Time: O(n)
    // Space: O(n)
    //

    int tabulation(int n) {

        if (n == 1 || n == 2)
            return n;

        vector<int> dp(n + 1);

        dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i <= n; i++) {

            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};


int main() {

    int n = 5;

    Solution obj;

    // Approach 1: Recursion
    cout << "Recursion: "
         << obj.recursion(n) << endl;

    // Approach 2: Memoization
    cout << "Memoization: "
         << obj.memoization(n) << endl;

    // Approach 3: Tabulation
    cout << "Tabulation: "
         << obj.tabulation(n) << endl;

    return 0;
}