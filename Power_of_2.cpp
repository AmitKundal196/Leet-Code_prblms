#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 1)
            return false;

        while (n != 1) {
            if (n % 2 == 1)
                return false;
            n = n / 2;
        }
        return true;
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (obj.isPowerOfTwo(n))
        cout << n << " is a power of 2." << endl;
    else
        cout << n << " is not a power of 2." << endl;

    return 0;
}
