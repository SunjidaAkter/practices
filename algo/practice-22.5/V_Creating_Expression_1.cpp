// #include<bits/stdc++.h>
// using namespace std;
// typedef pair<int,int>pii;
// #define ll long long
// int main(){
//     int n;ll diff;
//     cin>>n>>diff;
//     int a[n]; ll sum=0;
//     for(int i=0;i<n;i++)cin>>a[i];
//     ll s;
//     for(int i=0;i<n;i++)sum+=a[i];
//     if((diff+sum)%2==0&&(diff+sum)>=0){
//         s=abs(diff+sum)/2;
//         int dp[n+1][s+1];
//         dp[0][0]=1;
//         for(ll i=1;i<=s;i++)dp[0][i]=0;
//         for(int i=1;i<=n;i++){
//             for(ll j=0;j<=s;j++){
//                 if(a[i-1]<=j){
//                     dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
//                 }else{
//                     dp[i][j]=dp[i-1][j];
//                 }
//             }
//         }
//         bool flag=false;
//         for(ll i=0;i<=s;i++){
//             if(dp[n][i]==1){
//                 flag=true;
//                 break;
//             }
//         }
//         if(flag)cout<<"YES";
//         else cout<<"NO";
//     }else cout<<"NO";  
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// typedef pair<int,int>pii;
// #define ll long long
// bool recur(int n,ll a[],ll i,ll s){
//     if(n==0||s==i)return true;
//     else if(n==0&&(s!=i))return false; 
//     // if(s>i){
//     //     bool change1=recur(n-1,a,i+a[n-1],s);
//     //     bool change2=recur(n-1,a,i-a[n-1],s);
//     //     return change1||change2;
//     // }
//     // if(s<i){
//     //     return recur(n-1,a,i-a[n-1],s);
//     // }
//     bool change1=recur(n-1,a,i+a[n-1],s);
//     bool change2=recur(n-1,a,i-a[n-1],s);
//     return change1||change2;
// } 
// int main(){
//     int n,s;cin>>n>>s;
//     ll a[n];
//     for(int i=0;i<n;i++)cin>>a[i];
//     if(recur(n,a,0,s))cout<<"YES";
//     else cout<<"NO";
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
long long size,result;
long long arr[21];
bool check(long long sum,long index){
	if(index == size){
		 return sum == result;
	}
	bool route1 = check(sum+arr[index],index+1);
	bool route2 = check(sum-arr[index],index+1);
	return route1 || route2;
}
int main() {
	cin>>size>>result;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	if(check(arr[0],1)){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}
