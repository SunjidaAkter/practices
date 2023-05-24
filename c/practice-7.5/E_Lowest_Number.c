#include<stdio.h>
#include <limits.h>
int main(){
    int n,min=INT_MAX,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(min>arr[i]){
            min=arr[i];
            x=i+1;
            
        }
    }
    printf("%d %d",min,x);
    return 0;
}