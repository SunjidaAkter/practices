#include<stdio.h>
#include<string.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n],count[m];
    for(int i=0;i<m;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        count[arr[i]-1]++;
    }
    for(int i=0;i<m;i++){
        printf("%d\n",count[i]);
    }
    return 0;
}