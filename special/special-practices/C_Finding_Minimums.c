#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int n,k,min;
    scanf("%d %d",&n,&k);
    int a[n],extra=n%k,filledSize=n-extra;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<filledSize;i+=k){
        min=INT_MAX;
        for(int j=i;j<i+k;j++){
            if(min>a[j]){
                min=a[j];
            }
        }
        printf("%d ",min);
    }
    if(extra>0){
        min=INT_MAX;
        for(int i=filledSize;i<n;i++){
            if(min>a[i]){
                min=a[i];
            }
        }
        printf("%d",min);
    }
    return 0;
}
