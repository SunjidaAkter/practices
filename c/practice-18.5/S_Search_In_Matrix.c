#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int m,n,x,flag=0;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&x);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==x){
                flag=1;
            }
        }
    }
    if(flag==1){
        printf("will not take number");
    }else{
        printf("will take number");
    }
    return 0;
}