#include<bits/stdc++.h>
using namespace std;

int main(){

    int numRows;
    cin>>numRows;

    for (int i = 1; i <= numRows+3; i++) {
        // Print spaces
        for (int j = 1; j <= numRows+3 - i; j++) {
            cout << " ";
        }
 
        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
 
        // Move to the next line
        cout << endl;
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++) {
    //         cout << " ";
    //     }
 
    //     // Print asterisks
    //     for (int k = 1; k <= numRows; k++) {
    //         cout << "*";
    //     }
 
    //     // Move to the next line
    //     cout << endl;
        
    // }
    
}