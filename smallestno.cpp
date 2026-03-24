#include <iostream>
#include <climits>
using namespace std;
int main(){
    int nums[]={5,10,24,56,78,1,-2};
    int smallest =INT_MAX;
    int largest =INT_MIN;
    for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++){
        // if(nums[i]<smallest){
        //     smallest=nums[i];
        // }
        smallest=min(nums[i],smallest);
        largest=max(nums[i],largest);
    }
    cout<<"smallest="<<smallest<<endl;
     cout<<"largest="<<largest<<endl;
    return 0;
}