#include<iostream>
using namespace std;
int main(){
    int n,in;
    int max=0,sum=0;
    cout<<"Enter Num:";
    cin>>n;
 cout<<"Enter the runs scored:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        if(max<arr[i]){
            max=arr[i];
            in=i;
        }
    }
  
    cout<<sum<<"\n"<<in;
    return 0;
}
