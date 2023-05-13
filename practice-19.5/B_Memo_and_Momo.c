#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    long long int memo,momo,x;
    scanf("%lld %lld %lld",&memo,&momo,&x);
    if(memo%x==0 && momo%x==0){
        printf("Both");
    }else if(memo%x==0 && momo%x!=0){
        printf("Memo");
    }else if(memo%x!=0 && momo%x!=0){
        printf("No One");
    }else if(memo%x!=0 && momo%x==0){
        printf("Momo");
    }
    return 0;
}