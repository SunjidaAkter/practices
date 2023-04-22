#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char a[100];
        scanf("%s",&a);
        if(strlen(a)<10){
            printf("%s\n",a);
        }else{
            char first,last;
            for(int i=0;i<strlen(a);i++){
                if(i==0){
                    first=a[i];
                }else if(i==(strlen(a)-1)){
                    last=a[i];
                }
            }
            printf("%c%d%c\n",first,(strlen(a)-2),last);
        }
    }
    return 0;
}