#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
long long int fun(int a[],int i,int n){
    if(i==n)return 0;
    return a[i]+fun(a,i+1,n);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%lld",fun(a,0,n));
    return 0;
}