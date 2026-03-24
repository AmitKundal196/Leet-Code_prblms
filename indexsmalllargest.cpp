#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {5, 10, 24, 56, 78, 1, -2};
    int n = sizeof(nums) / sizeof(nums[0]);

    int smallest = INT_MAX;
    int index = 0;

    for(int i = 0; i < n; i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];
            index = i;
        }
    }

    cout << "Smallest value: " << smallest << endl;
    cout << "Index: " << index << endl;

    return 0;
}