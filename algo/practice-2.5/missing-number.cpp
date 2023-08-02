class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int result;
        for(int i=0;i<nums.size()+1;i++){
            if(!s.count(i)){
                result=i;
            }
        }
        return result;
    }
};