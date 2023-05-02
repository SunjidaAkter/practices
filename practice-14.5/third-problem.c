/*
Question: Make a function named char_to_ascii() which will take a character as parameter and it will convert that character to ascii value and return through that function. So, the return type will be int. Now in the main function take a character input and call that function to get the integer value of it and print that in the main function.

Bonus: You can also try this with 4 different types of function use cases.



Sample Input
a
Sample Output
97
Sample Input
A
Sample Output
65
Sample Input
0
Sample Output
48


*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int char_to_ascii(char x){
    return x;
}
int main(){
    char x;
    scanf("%c",&x);
    printf("%d",char_to_ascii(x));
    return 0;
}