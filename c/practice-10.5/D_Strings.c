#include<stdio.h>
#include<string.h>
int main(){
    char a[11],b[11];
    scanf("%s %s",&a,&b);
    printf("%d %d\n",strlen(a),strlen(b));
    // char c[strlen(a)+strlen(b)+1];
    // for(int i=0;a[i]!='\0';i++){
    //     c[i]=a[i];
    // }
    // int i=strlen(a);
    // for(int j=0;b[j]!='\0';j++){
    //     c[i]=b[j];
    //     i++;
    // }
    // for(int i=0;i<strlen(c)-1;i++){
    //     printf("%c",c[i]);
    // }
    // printf("\n");
    printf("%s%s\n",a,b);
    char temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    for(int i=0;a[i]!='\0';i++){
        printf("%c",a[i]);
    }
    printf(" ");
    for(int i=0;b[i]!='\0';i++){
        printf("%c",b[i]);
    }
    return 0;
}