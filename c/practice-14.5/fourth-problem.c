/*
Question: Make a function named small_to_capital() which will take a small alphabet as a parameter (which is a character) and it will convert that small alphabet to capital alphabet and return through that function. So, the return type will be char. Now in the main function take a character input which will be small alphabets and call that function to get the capital alphabet and print that in the main function.

Bonus: You can also try this with 4 different types of function use cases.



Sample Input
a
Sample Output
A
Sample Input
z
Sample Output
Z
Sample Input
q
Sample Output
Q


*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
char small_to_capital(char x){
    return x-32;
}
int main(){
    char x;
    scanf("%c",&x);
    printf("%c",small_to_capital(x));
    return 0;
}