class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int ans1=0,ans2=0;
        int s=0,e=nums.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(mid==0){
                ans1=0;
                break;
            }else if(nums[mid]>=0 && nums[mid-1]<0){
                ans1=mid;
                break;
            }else if(nums[mid]<0){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        int pos=ans1;
        while(nums[pos]==0){
            pos++;
        }
        ans2=nums.size()-pos;
        int mx=max(ans1,ans2);
        return mx;
    }
};