#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
void fun(int a[],int i,int n){
    if(i>=n)return;
    fun(a,i+2,n);
    printf("%d ",a[i]);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fun(a,2,n);
    printf("%d",a[0]);
    return 0;
}