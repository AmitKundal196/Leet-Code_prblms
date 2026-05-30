#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; i++) {

            int start = 0;
            int end = n - 1;

            while (start <= end) {

                int mid = start + (end - start) / 2;

                if (matrix[i][mid] == target)
                    return true;

                else if (matrix[i][mid] < target)
                    start = mid + 1;

                else
                    end = mid - 1;
            }
        }

        return false;
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    int target = 16;

    Solution obj;

    if (obj.searchMatrix(matrix, target))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}