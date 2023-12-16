
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        if (visited[i] == true)
            continue;
 
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout <<count <<" ";
    }
}
int main(){
    int n;
cout<<"Enter n";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
countFreq(arr,n);
return 0;
}
