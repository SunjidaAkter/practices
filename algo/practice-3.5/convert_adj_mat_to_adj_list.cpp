/*
* Question: You will be given an adjacency matrix for a directed graph (index starting from 1) as input. Now, convert it to an adjacency list and print it.


*Sample Input
? 4
? 0 0 0 1
? 1 0 0 1
? 1 1 0 0
? 0 0 1 0
*Sample Output
? List 1 : 4
? List 2 : 1 4
? List 3 : 1 2
? List 4 : 3

! ***************************************** !

*Sample Input
? 5
? 0 0 0 0 0
? 1 0 0 1 1
? 1 1 0 1 1
? 1 1 1 0 0
? 0 0 1 0 0
*Sample Output
? List 1 : 
? List 2 : 1 4 5
? List 3 : 1 2 4 5
? List 4 : 1 2 3
? List 5 : 3


*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int c[n+1][n+1];
    for(int i=0;i<n;i++){
        cout<<"List "<<i+1<<" : ";
        for(int j=0;j<n;j++){
            cin>>c[i][j];
            if(c[i][j]==1){
                cout<<j+1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
