#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    if(n>1000){
        cout<<"I will buy Punjabi"<<endl;
        if(n>=1500){
            cout<<"I will buy new shoes"<<endl;
            cout<<"Alisa will buy new shoes"<<endl;
        }
    }
    else{
        cout<<"Bad luck!";
    }

    return 0;
}