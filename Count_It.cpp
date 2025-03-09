#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    int captial=0,small=0,space=0;
    getline(cin,s);

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z'){
            captial++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            small++;
        }
        else if(s[i]==' '){
            space++;
        }
    }
    
    cout<<"Capital - "<<captial<<endl;
    cout<<"Small - "<<small<<endl;
    cout<<"Spaces - "<<space<<endl;
}