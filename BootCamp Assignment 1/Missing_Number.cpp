#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,s,a,b,c;

    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        
        cin>>s>>a>>b>>c;

        int sum=a+b+c;
        cout<<s-sum<<endl;

    }
    
return 0;
}