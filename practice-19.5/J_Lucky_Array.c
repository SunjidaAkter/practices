#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int n,min=INT_MAX,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(min>a[i]){
            min=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==min){
            sum++;
        }
    }
    if(sum%2==0){
        printf("Unlucky");
    }else{
        printf("Lucky");
    }
    return 0;
}