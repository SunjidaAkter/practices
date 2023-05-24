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
    for(int i=0;i<n;i++){
        if(a[i]==0){
            int j=0;
            int k=i-1;
            while(j<k){
                int temp=a[j];
                a[j]=a[k];
                a[k]=temp;
                j++;
                k--;
            }
        }
    }   
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}