#include<iostream>
using namespace std;
int main(){
 int n, arr[50],i,target;
 cout<<"enter size of array:";
 cin>>n;
 cout<<"enter "<<n <<"elements:";
 for(i=0;i<n;i++){
    cin>>arr[i];
 }
 cout<<"enter element to search:";
 cin>>target;
 int low,high,mid;
 low=0;
 high=n-1;
 while(low<=high){
    mid=low+high/2;
    if(arr[mid]==target){
        cout<<"element found at index%d"<<mid;
        return 0;
    }
    else 
    cout<<"element not found";
    
 }
 return 0;
}