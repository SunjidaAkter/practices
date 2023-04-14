#include<stdio.h>
int main(){
    int n,x,result;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            result=i;
            break;
        }else{
            result=-1;
        }
    }
    printf("%d",result);
    
    return 0;
}