#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    int arr[n],avg=0,sum;
    for(int i=0;i<n;i++){
        cin>>arr[i];
       avg+=arr[i];
    }
    avg=avg/n;
    
for(int j=0;j<n;j++){
    if(arr[j]>=avg){
        sum=sum+arr[j];
    }
}
cout<<sum;
    return 0;
    
}
