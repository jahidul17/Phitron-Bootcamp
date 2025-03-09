#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n==1){
        cout<<1;
    }
    if(n>1){
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                cout<<" ";
            }
            for (int k = i; 1 <= k; k--)
            {
                cout<<k;
            }
            cout<<endl;            
            
        }
        
    }

}
