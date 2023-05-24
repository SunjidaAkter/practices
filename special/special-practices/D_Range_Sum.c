#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        long long int m,n;
        long long int sum;
        scanf("%lld %lld",&m,&n);
        if(m<n){
            sum=((((n)*(n+1))/2)-(((m)*(m+1))/2))+m;
        }else if(m>n){
            sum=((((m)*(m+1))/2)-(((n)*(n+1))/2))+n;
        }
        printf("%lld\n",sum);
    }
    return 0;
}