#include<bits/stdc++.h>
using namespace std;

int count_before_one(const vector<int>& arr,int size){
    
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==1){
            return i;
        }
    }
    return size;
}

int main(){

    int n;
    cin>>n;
    // int arr[n];
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count=count_before_one(arr,n);
    cout<<count;

}