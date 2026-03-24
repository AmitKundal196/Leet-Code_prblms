#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter size of an array" <<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
     for(i=0;i<n-1;i++){
        for(j=0;j<n-i- 1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);

        }
     }
     cout<<"sorted array"<<endl;
     for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
     }
     return 0;
}