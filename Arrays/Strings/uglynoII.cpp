#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int nthUglyNumber(int n) {

        vector<int> ugly(n);
        ugly[0] = 1;

        int i2 = 0;
        int i3 = 0;
        int i5 = 0;

        for (int i = 1; i < n; i++) {

            int x = ugly[i2] * 2;
            int y = ugly[i3] * 3;
            int z = ugly[i5] * 5;

            ugly[i] = min(x, min(y, z));

            if (ugly[i] == x) i2++;
            if (ugly[i] == y) i3++;
            if (ugly[i] == z) i5++;
        }

        return ugly[n - 1];
    }
};

int main() {
    Solution obj;

    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "The " << n << "th Ugly Number is: " 
         << obj.nthUglyNumber(n) << endl;

    return 0;
}