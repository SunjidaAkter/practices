#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int n,k=0;
    char str[n+1],s[n+1];
    while((scanf("%c",&s[k]))!=EOF){
        str[k]=s[k];
        k++;
    }
    for(int i=0;i<(strlen(str)-1);i++){
        for(int j=i+1;str[j]!='\0';j++){
            // int num=strcmp(str[i],str[j]);
            if(str[i]>str[j]){
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("%s",str);
    return 0;
}