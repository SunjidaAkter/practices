#include<stdio.h>
#include<string.h>
int main(){
    char a[1001];
    // fgets(a,1001,stdin);//eta just string line input neaer somoi use korte hobe
    scanf("%s",&a);
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
//another way
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[1001],b[1001];
//     scanf("%s",&a);
//     for(int i=0;a[i]!='\0';i++){
//         b[i]=a[i];
//     }
//     int i=0,j=strlen(a)-1;
//     while(i<j){
//         char temp=b[i];
//         b[i]=b[j];
//         b[j]=temp;
//         i++;
//         j--;
//     }
//     int flag;
//     for(int i=0;i<strlen(a);i++){
//         if(a[i]!=b[i]){
//             flag=0;
//             break;
//         }else{
//             flag=1;
//             continue;
//         }
//     }
//     if(flag){    
//         printf("YES");
//     }else{
//         printf("NO");
//     }
//     return 0;
// }