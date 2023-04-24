#include<stdio.h>
#include<string.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n],count[m+1];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
        count[i+1]++;
    }
    for(int i=0;i<m+1;i++){
        printf("%d\n",count[i+1]);
    }
    return 0;
}