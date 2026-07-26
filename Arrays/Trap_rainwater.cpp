#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();

        // Left maximum height array
        vector<int> lmax(n, 0);

        // Right maximum height array
        vector<int> rmax(n, 0);

        // Initialize first and last elements
        lmax[0] = height[0];
        rmax[n - 1] = height[n - 1];

        // Fill left max array
        for (int i = 1; i < n; i++) {
            lmax[i] = max(lmax[i - 1], height[i]);
        }

        // Fill right max array
        for (int i = n - 2; i >= 0; i--) {
            rmax[i] = max(rmax[i + 1], height[i]);
        }

        // Calculate trapped water
        int ans = 0;

        for (int i = 0; i < n; i++) {
            ans += min(lmax[i], rmax[i]) - height[i];
        }

        return ans;
    }
};

int main() {

    // Test Case
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    Solution obj;

    cout << "Trapped Water = "
         << obj.trap(height) << endl;

    return 0;
}