#include<stdio.h>
#include<string.h>
int main(){
    char a[100001];
    fgets(a,100001,stdin);
    for(int i=0;i<strlen(a);i++){
        if(a[i]>=97 && a[i]<=122){
            printf("%c",a[i]-32);
        }else if(a[i]==','){
            printf(" ");
        }else if (a[i]>=65 && a[i]<=90){
            printf("%c",a[i]+32);
        }
    }
    return 0;
}