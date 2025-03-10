#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n],new_arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int size = sizeof(arr) / sizeof(arr[0]);

    int max_val=*max_element(arr,arr+size);
  
     
    for (int i = 0; i < n; i++)
    {
        new_arr[i]=max_val-arr[i];
    }
    

    for(int i=0;i<n;i++){
        cout<<new_arr[i]<<" ";
    }
}