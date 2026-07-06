#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int left = 0;
        int n = fruits.size();
        int ans = 0;

        unordered_map<int, int> mp;

        for (int right = 0; right < n; right++) {

            mp[fruits[right]]++;

            // Shrink the window until it contains at most 2 fruit types
            while (mp.size() > 2) {

                mp[fruits[left]]--;

                if (mp[fruits[left]] == 0) {
                    mp.erase(fruits[left]);
                }

                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};

int main() {

    Solution obj;

    vector<int> fruits = {1, 2, 1, 2, 3, 2, 2};
    
    cout << "Maximum Fruits Collected = "
         << obj.totalFruit(fruits);

    return 0;
}