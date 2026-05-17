#include <iostream>
using namespace std;

int mySqrt(int x) {

    int start = 0;
    int end = x;
    int ans = x;

    if(x < 2) {
        return x;
    }

    while(start <= end) {

        int mid = start + (end - start) / 2;

        if(mid == x / mid) {

            ans = mid;
            break;
        }

        if(mid < x / mid) {

            ans = mid;
            start = mid + 1;
        }

        else {

            end = mid - 1;
        }
    }

    return ans;
}

int main() {

    int x;

    cout << "Enter number: ";
    cin >> x;

    cout << "Square root is: " << mySqrt(x);

    return 0;
}