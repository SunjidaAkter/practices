class Solution {
public:
    int maxProduct(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int i=nums.back();
       nums.pop_back();
       int j=nums.back();
       return ((i-1)*(j-1));
    }
};