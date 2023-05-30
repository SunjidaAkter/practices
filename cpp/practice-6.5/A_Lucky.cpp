#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        int sum1=0,sum2=0;
        for(int j=0;j<6;j++){
            for(int k=0;k<3;k++){
                sum1+=x%10;
                x/=10;
            }
            for(int k=0;k<3;k++){
                sum2+=x%10;
                x/=10;
            }
        }
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}