#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    if(n==0){
        cout<<0<<" "<<1;
    }
    else if(n>0){
        for (int i = 1; i <= n; i++)
        {
            cout<<i<<" ";
        }
    }
    else{
        for (int i = n; i <= 1; i++)
        {
            cout<<i<<" ";
        }

    }   
    
    return 0;
}