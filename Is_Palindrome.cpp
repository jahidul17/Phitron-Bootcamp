#include<bits/stdc++.h>
using namespace std;

int is_palindrome(string s){
    string left,right;
    left=s;    
    reverse(s.begin(),s.end());
    right=s;
    if(left==right){
        return 1;
    }
    else{
        return 0;
    }
}



int main(){

    string s,left,right;
    cin>>s;
    int status=is_palindrome(s);

    if(status){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}