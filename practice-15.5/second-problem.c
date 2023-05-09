// /*
// Question: Write a function named my_len() which receives a string as a parameter and then counts the length of that string and returns that count. Don’t use strlen() function to get the length of the string. After receiving that count in the main function print it.
// Note: The string will not have any spaces.



// Sample Input
// hello
// Sample Output
// 5


// */
// #include<stdio.h>
// #include<string.h>
// #include<math.h>
// #include<stdlib.h>
// #include<limits.h>
// int my_len(char a[]){
//     int length=0;
//     for(int i=0;a[i]!='\0';i++){
//         length++;
//     }
//     return length;
// }
// int main(){
//     char a[101];
//     scanf("%s",&a);
//     printf("%d",my_len(a));
//     return 0;
// }
#include<stdio.h>
void f2()
{
    printf("f1 ");
}
void f1()
{
    printf("f2 ");
    f2();
}
int main()
{
    printf("Main ");
    f1();   
}