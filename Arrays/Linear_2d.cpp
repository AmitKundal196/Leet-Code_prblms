#include <iostream>
#include <utility>
using namespace std;

pair<int,int> LinearSearch(int mat[][3], int rows, int cols, int key) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(mat[i][j] == key) {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main() {
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    pair<int,int> ans = LinearSearch(matrix, 4, 3, 13);

    cout << "(" << ans.first << ", " << ans.second << ")";

    return 0;
}