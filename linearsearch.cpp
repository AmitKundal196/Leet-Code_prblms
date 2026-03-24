#include<iostream>
using namespace std;
 int linearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
        return -1;
    }
 
 int main(){
    int arr[]={3,5,6,3,7,8,9};
    
     int size=7;
    int target=9;
  cout<<linearSearch(arr,size,target)<<endl;
 
    return 0;
 }