#include<iostream>
#include<vector>
using namespace std;
int PeakIndexInMountainArray(vector<int> arr){
    int start=0,end=arr.size()-1;
    while(start<end){
      int mid = start + (end - start) / 2;
        if(arr[mid]<arr[mid+1]){
            start=mid+1;        }
            else{
                end=mid;
            }
 
    }
  return start;
}
int main(){
 vector<int> arr={0,2,1,0};
 cout<<PeakIndexInMountainArray(arr)<<endl;

}