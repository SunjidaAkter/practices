#include<stdio.h>
#include<string.h>
int main(){
    char a[1001];
    fgets(a,1001,stdin);
    int is_palindrome=1;
    int i=0,j=strlen(a)-1;
    while(i<j){
        printf("%c %c %d\n",a[i],a[j],j);
        if(a[i]!=a[j]){
            is_palindrome=0;
            break;
        }
        i++;
        j--;
    }
    if(is_palindrome){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}