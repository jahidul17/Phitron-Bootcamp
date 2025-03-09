#include<bits/stdc++.h>
using namespace std;

void count_before_one(int arr[],int size){

    for (int i = 0; i < size; i++)
    {
        if(arr[i]==1){
            cout<<i;
        }
    }


}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    count_before_one(arr,n);

}