#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    int upper=0,lower=0;
    cin>>s;
    
    for (int i = 0; i < s.length(); i++)
    {
        // string like act array
        if(s[i]>='A' && s[i]<='Z'){
            upper++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            lower++;
        }
    }   

    cout<<upper<<" "<<lower;

}