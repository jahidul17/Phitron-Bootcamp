#include<bits/stdc++.h>
using namespace std;

int main(){

    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(row-1==i){
                cout<<arr[i][j]<<" ";
            }
            
        }
    }
    cout<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(col-1==j){
                cout<<arr[i][j]<<" ";
            }
            
        }
    }
    

}
