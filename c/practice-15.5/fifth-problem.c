/*
Question: Write a function named swap_it() which will receive addresses of two integer variables. That means you need to receive them as integer pointers in the function parameter. In the function you need to swap the values of each other, you know that you can access the values of them by using dereferencing. You don’t need to return anything. After the function calls print the values of those two variables in the main function and see if anything happens!



Sample Input
10 20
Sample Output
20 10


*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
void swap_it(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    swap_it(&x,&y);
    printf("%d %d",x,y);
    return 0;
}