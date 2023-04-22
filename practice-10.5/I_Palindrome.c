#include<stdio.h>
#include<string.h>
int main(){
    char a[1001],b[1001];
    fgets(a,1001,stdin);
    b[1001]=a[1001];
    int i=0,j=strlen(a);
    while(i<j){
        char temp=b[i];
        b[i]=b[j];
        b[j]=temp;
        i++;
        j--;
    }
    if(a==b){
        printf("YES");
    }else{
        printf("%s",b);
    }
    return 0;
}