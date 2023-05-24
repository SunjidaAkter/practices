#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void fun(void){
    int n;
    scanf("%d",&n);
    for(int i=1;i<5;i++){
        printf("%d ",i);
    }
    printf("%d",5);
}
int main(){
    fun();
    return 0;
}