/*
Question: Take an integer array A of size N as input. Then take an integer M as input. You need to take an array B of size M and copy all elements of array A to array B. Delete the array A and then take input of the rest of the elements of array B. After that print array B.

Sample Input
5
1 2 3 4 5
10
6 7 8 9 10
Sample Output
1 2 3 4 5 6 7 8 9 10
Sample Input
3
10 20 10
5
60 40
Sample Output
10 20 10 60 40


*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m;
    int* a=new int[m]; 
    int* b=new int[n]; 
    int* c=new int[n-m]; 
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cin>>n;
    for(int i=0;i<m;i++){
        b[i]=a[i];
    }
    delete[] a;
    for(int i=0;i<n-m;i++){
        cin>>c[i];
        b[i+m]=c[i];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}