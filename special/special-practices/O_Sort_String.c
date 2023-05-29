#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int n,cs[26]={0};
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        char c;
        scanf("%c",&c);
        if(c>96){
            cs[c-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        while(cs[i]!=0){
            printf("%c",i+'a');
            cs[i]--;
        }
    }
    return 0;
}