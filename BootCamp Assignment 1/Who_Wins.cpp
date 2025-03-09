#include <bits/stdc++.h>
using namespace std;

int main() {

    int test,tt=0,pp=0;
    cin>>test;

    for (int  i = 0; i < test; i++)
    {
        int t,p;
        cin>>t>>p;

        if(t>p){
            tt++;
        }
        if(t<p){
            pp++;
        }
    }
    if(tt>pp){
        cout<<"Tiger";
    }
    else if(tt<pp){
        cout<<"Pathan";
    }
    else{
        cout<<"Draw";
    }

}

