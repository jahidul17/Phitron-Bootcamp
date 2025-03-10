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

// ----------------------

// #include <stdio.h>
// #include <stdlib.h>

// int flag=1;
// int is_palindrome(char *s,int n)
// {

//     for(int i=0,j=n; i<j; i++,j--)
//     {
//         if(s[i]==s[j])
//         {
//             continue;
//         }
//         else
//         {
//             flag=0;
//             break;
//         }

//     }

//     return flag;


// }

// int main()
// {
//     char s[1001];

//     scanf("%s",s);

//     int sz=strlen(s)-1;

//     is_palindrome(s,sz);

//     if(flag==1)
//     {
//         printf("Palindrome");
//     }
//     else
//     {
//         printf("Not Palindrome");
//     }

//     return 0;
// }