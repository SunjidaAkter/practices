/*
Question: Take a positive integer N as input and print the pattern shown in the sample input output.



Sample Input
5
Sample Output
*********
 *******
  *****
   ***
    *
Sample Input
8
Sample Output
***************
 *************
  ***********
   *********
    *******
     *****
      ***
       *


*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=0,k=2*n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        s++;
        k-=2;
        printf("\n");
    }
    return 0;
}