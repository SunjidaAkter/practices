class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
    // vector<int>v;
    // priority_queue<int,vector<int>,greater<int>>pq;
    // for(int i=0;i<nums.size();i++){
    //     pq.push(nums[i]);
    // }
    // while(!pq.empty()){
    //     v.push_back(pq.top());
    //     pq.pop();
    // }
    // return v;
    vector<int>v;
    vector<int>v1;
    for(int i=0;i<nums.size();i++){
        v.push_back(nums[i]);
        int cur_idx=v.size()-1;
        while(cur_idx!=0){
            int parent_idx=(cur_idx-1)/2;
            if(v[cur_idx]<v[parent_idx])swap(v[cur_idx],v[parent_idx]);
            else break;
            cur_idx=parent_idx;
        }
    }
    for(int i=0;i<nums.size();i++){
        v1.push_back(v[i]);
    }
    return v1;
    }
};