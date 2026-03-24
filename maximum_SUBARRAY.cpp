#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={-2, -3, -1, -5};
    int n=4;

    int currsum=0, maxsum=INT_MIN;
    // int start=0, end=0, tempstart=0;

    for(int i=0;i<n;i++){
        currsum += arr[i];
         maxsum = max(maxsum, currsum);

        // if(currsum > maxsum){
        //     maxsum = currsum;
        //     start = tempstart;
        //     end = i;   // 
        // }

        if(currsum < 0){
            currsum = 0;
            // tempstart = i + 1;
        }
    }

    cout<<"maximum subarray sum is "<<maxsum<<endl;
    // cout<<"start index is "<<start<<endl;
    // cout<<"end index is "<<end<<endl;

    return 0;
}