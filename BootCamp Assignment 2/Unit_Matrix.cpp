#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j){
                continue;
            }
            if(arr[i][j]==1){
                flag=true;
                break;
            }
            
        }
        if(flag==true){
            break;
        }
        
    }
    if(flag==false){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }        

}