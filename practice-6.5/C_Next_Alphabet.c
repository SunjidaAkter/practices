#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c==122){
        printf("%c",c-25);
    }else if(c<=121 || c>=97){
        printf("%c",c+1);
    }
    // printf("%c",c-25);
    return 0;
}