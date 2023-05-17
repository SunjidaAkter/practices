#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int test,even=0,odd=0;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[i]);
            if(a[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        if(n%2!=0){
            printf("%d\n",-1);
        }else if(odd==even){
            printf("%d\n",0);
        }else{
            printf("%d\n",(abs(even-odd))/2);
        }
    }
    return 0;
}