#include<iostream>
using namespace std;
int main(){
  /*  int arr [6]={10,20,5,6,1,2};
     for(int i=0;i<5;i++){
         int index=i;
         for( int j=i+1;j<6;j++){
            if( arr[j]<arr[index])
            index=j;
         }
         swap(arr[i],arr[index]);
     }
    for(int i=0;i<6;i++)
    cout<<arr[i]<<endl;
    return 0;*/
    int n,i;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter elements";
    for(i=0;i<n;i++) 
    cin>>arr[i];
     for(i=0;i<n;i++){
         int index=i;
         for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index])
            index=j;
         }
         swap(arr[i],arr[index]);
     }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     return 0;



}