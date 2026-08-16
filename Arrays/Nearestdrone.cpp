#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
using namespace std;

class Solution {
public:

    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {

        int ans = -1;

        // Store the smallest distance found so far
        int chotadis = INT_MAX;

        for (int i = 0; i < drones.size(); i++) {

            // Get drone coordinates and range
            int x = drones[i][0];
            int y = drones[i][1];
            int range = drones[i][2];

            // Manhattan distance
            int distance = abs(x - target[0]) +
                           abs(y - target[1]);

            // Drone must be within range
            // and closer than the previous drone
            if (distance <= range && distance < chotadis) {

                chotadis = distance;
                ans = i;
            }
        }

        return ans;
    }
};

int main() {

    vector<vector<int>> drones = {
        {0, 0, 5},
        {3, 4, 10},
        {10, 10, 5}
    };

    vector<int> target = {1, 1};

    Solution obj;

    cout << "Nearest Drone Index: "
         << obj.nearestDrone(drones, target) << endl;

    return 0;
}