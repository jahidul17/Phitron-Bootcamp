#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,x;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int count=0;
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==x){
            count++;
        }
    }
    cout<<count;
    
}