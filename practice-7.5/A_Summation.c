#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    if(sum>=0){
        printf("%d",sum);
    }else{
        printf("%d",-sum);
    }
    return 0;
}