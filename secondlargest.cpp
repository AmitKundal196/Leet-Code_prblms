#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,4,56,54,5};
    int sz=6;

    int largest = arr[0];
    int second = -1;

    for(int i=1;i<sz;i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }

    cout<<"Second largest: "<<second;

    return 0;
}