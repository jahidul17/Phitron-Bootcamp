#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int x,v;
    cin>>x>>v;

    for (int i = 0; i < n; i++)
    {
        if(i==x){
            a[i]=v;
        }
    }
    
    for (int i = n-1; i >=0; i--)
    {
       cout<<a[i]<<" ";
    }
    

}