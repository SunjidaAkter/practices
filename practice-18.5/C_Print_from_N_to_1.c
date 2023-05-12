#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
void fun(int i,int n){
    if(i==n+1)return;
    fun(i+1,n);
    printf("%d ",i);
}
int main(){
    int n;
    scanf("%d",&n);
    fun(2,n);
    printf("%d",1);
    return 0;
}