#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int fun(long long int e){
    if(e%2!=0)return 0;
    return 1+fun(e/2);
}

int main(){
    int n,max1=INT_MIN;
    scanf("%d",&n);
    long long int a[n];
    int max[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        long long int e=a[i];
        max[i]=fun(e);
    }
    for(int i=0;i<n;i++){
        if(max[i]>max1){
            max1=max[i];
        }
    }
    printf("%d",max1);
    return 0;
}