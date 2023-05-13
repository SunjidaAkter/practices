#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int x,p;
    scanf("%d %d",&x,&p);
    float ans=100*1.0*p/(100-x);
    printf("%0.2f",ans);
    return 0;
}