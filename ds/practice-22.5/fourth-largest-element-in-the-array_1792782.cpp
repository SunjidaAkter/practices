#include <bits/stdc++.h>

int getFourthLargest(int arr[], int n)
{
    // Write your code here.
    // sort(arr.begin(),arr.end())
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    if(pq.size()>=4){
      for (int i = 0; i < 3; i++) {
          pq.pop();
      }
      return pq.top();
    }
    return -2147483648;
}