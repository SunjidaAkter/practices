/*
Question: Write a function named my_abs() that receives an integer value as parameter and returns the absolute value of that. Absolute value means if the value is negative it will be converted to positive value. Then print the value in the main function.



Sample Input
5
Sample Output
5
Sample Input
-7
Sample Output
7


*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int my_abs(int x){
    if(x>=0){
        return x;
    }else{
        return ((-1)*x);
    }
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",my_abs(x));
    return 0;
}