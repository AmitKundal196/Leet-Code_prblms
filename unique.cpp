#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,1,2,3,4};
    int sz=7;

    for(int i=0;i<sz;i++){
        int count = 0;

        for(int j=0;j<sz;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count == 1){
            cout<<"Unique element: "<<arr[i];
            return 0;
        }
    }

    cout<<"No unique element found";
    return 0;
}