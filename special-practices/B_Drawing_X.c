#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1 && i==j){
                printf("X");
            }else if(i==j){
                printf("\\");
            }else if(i+j==n-1){
                printf("/");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}