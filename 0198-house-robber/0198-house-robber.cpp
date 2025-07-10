class Solution {
public:
    int fn(int ind, vector<int>&nums, vector<int>&dp){
        
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int left=nums[ind]+fn(ind-2,nums,dp);
        int right=0+fn(ind-1,nums,dp);

        return dp[ind]=max(left,right);
    }

    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return fn(nums.size()-1,nums,dp);
    }
};