#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==0 && b==0){
        printf("NO");
    }else if(abs(a-b)==1||abs(a-b)==0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}