#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int maxwater = 0;
    int start = 0;
    int end = height.size() - 1;

    while (start < end) {
        int w = end - start;
        int h = min(height[start], height[end]);
        int currwater = w * h;

        maxwater = max(maxwater, currwater);

        if (height[start] < height[end]) {
            start++;
        } else {
            end--;
        }
    }
    return maxwater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    int result = maxArea(height);
    cout << "Maximum water: " << result << endl;

    return 0;
}