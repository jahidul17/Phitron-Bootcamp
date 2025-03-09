#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int n;
    cin>>n;
    int i=20;
    while (n>i)
    {
        if(i%3==0 && i%7==0){
            cout<<i<<endl;
        }
        i++;
    }
    return 0;
}