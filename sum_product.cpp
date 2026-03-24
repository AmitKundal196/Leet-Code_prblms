// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number of element u want to enter";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter "<<n <<"Number";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     int product=1;
//      for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//         product=product*arr[i];
//      }
//      cout<<"Sum of  all number :"<<sum<<endl;
//      cout<<"product of all number:"<<product<<endl;
//       return 0;
//     }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of an array";
    cin>>n;
    int arr[n];
    cout<<"Enter"<<n<<  "Numbers"<<endl;
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int product=1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        product*=arr[i];
    }
     cout<<"Sum of  all number :"<<sum<<endl;
  cout<<"product of all number:"<<product<<endl;
      return 0;
}