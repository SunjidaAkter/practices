/*
You need to take one integer value as input and tell if the value is positive or negative or zero.
See the sample input and output for more clarification.



Sample Input
10
Sample Output
positive
Sample Input
-50
Sample Output
negative
Sample Input
0
Sample Output
zero


*/

#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("positive");
    }else if(a<0){
        printf("negative");
    }else{
        printf("zero");
    }
    return 0;
}