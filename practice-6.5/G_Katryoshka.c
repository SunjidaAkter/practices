#include<stdio.h>
int main(){
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a==0){
        printf("%d",0);
    }else if(a<=b ){
        if(a<=c){
            printf("%lld",a);
        }else{
            printf("%lld",c);
        }
    }else{
        if(b<=c){
            if(((a-b)/2)<=c-b){
                printf("%lld",b+((a-b)/2));
            }else{
                printf("%lld",c);
            }
        }else{
            printf("%lld",b);
        }
    }
    return 0;
}