#include <iostream>
#include <utility>
#include<climits>
using namespace std;

int MaxRowSum(int mat[][3],int rows, int cols){
    int maxrowsum=INT_MIN;
    for(int i=0;i<rows;i++){
       int rowsum=0;
       for(int j=0;j<cols;j++){
          rowsum+=mat[i][j];
       }
       maxrowsum=max(maxrowsum,rowsum);
    }
    return maxrowsum;
}


int main() {
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

int row=4;
int cols=3;

 cout<<MaxRowSum(matrix,row,cols);
    return 0;
}