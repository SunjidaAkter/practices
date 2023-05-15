#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    // int n,k,count=1;
    // scanf("%d %d",&n,&k);
    // int a[n],b[k];
    // for(int i=0;i<n;i++){
    //     scanf("%d",a[i]);
    // }
        int count=0;
    for(int i=0;i<19;i++){
        // printf("%d\n",i);
        count++;
        if((count+1)%3==0){
            printf("%d\n",count);
        }
    }
    return 0;
}