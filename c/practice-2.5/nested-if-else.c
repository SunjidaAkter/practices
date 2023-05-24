/*
Suppose your friend has told you that she will buy a Gucci Bag if she has 10 thousand taka or more. Otherwise if she has 5 thousand taka or more, she will buy a Levis Bag. Otherwise she will buy Something from New Market. She also told you that, if she could buy the Gucci bag and she has more than 20 thousand taka she will also buy a Gucci Belt.

Now, if you know the amount of money she has, can you tell which item/items she will buy?
See the sample input and output for more clarification.


Sample Input
20000
Sample Output
Gucci Bag
Sample Input
6500
Sample Output
Levis Bag
Sample Input
200
Sample Output
Something
Sample Input
25400
Sample Output
Gucci Bag
Gucci Belt


*/

#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a>=10000){
        printf("Gucci Bag\n");
        if(a>20000){
            printf("Gucci Belt");
        }
    }else if(a>=5000){
        printf("Levis Bag");
    }else{
        printf("Something");
    }
    return 0;
}