#include<stdio.h>
#include<limits.h>
int main(){
    int n,max=INT_MIN,min=INT_MAX;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==max){
            arr[i]=min;
        }else if(arr[i]==min){
            arr[i]=max;
        }
        printf("%d ",arr[i]);
    }
    return 0;
}