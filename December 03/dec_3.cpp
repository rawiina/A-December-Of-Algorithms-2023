#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    int arr[n],tcb=0,count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(tcb<arr[i]){
            count++;          //7 4 8 2 9
            tcb=arr[i];
        }
    }
    cout<<count;
    return 0;
    
}
