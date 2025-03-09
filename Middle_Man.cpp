#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    // cout<<arr;
    sort(arr,arr+size);
    if(n%2==0){
        cout<<arr[n/2-1]<<" "<<arr[n/2];       
    }
    else{
        cout<<arr[n/2];
    }
    
}