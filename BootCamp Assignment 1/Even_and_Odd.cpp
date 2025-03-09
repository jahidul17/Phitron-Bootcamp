#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,num,evensum=0,oddsum=0;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>num;
        if(num%2==0){
            evensum=evensum+num;
        }
        else{
            oddsum=oddsum+num;
        }
    }
    cout<<evensum<<" "<<oddsum;
    


}
