#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int i=0,j=n-1;
    while(i<j){
        printf("%d ",a[i]);
        printf("%d ",a[j]);
        i++;
        j--;
    }
    if(n%2!=0){
        printf("%d",a[n/2]);
    }
    return 0;
}