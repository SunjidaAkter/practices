/*
Question: 
Take a positive integer N as input and print the pattern shown in the sample input output.



Sample Input
5
Sample Output
    *
   **
  ***
 ****
*****
Sample Input
7
Sample Output
      *
     **
    ***
   ****
  *****
 ******
*******

*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=n-1,k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        s--;
        k++;
        printf("\n");
    }
    return 0;
}