class Solution {
public:
    bool fn(int ind, int tar, vector<int>&nums, vector<vector<int>>&dp){
        if(tar == 0) return true;

        if(ind < 0 ) return false;

        if(dp[ind][tar] != -1) return dp[ind][tar];

        int take=false;
        if(tar >= nums[ind]){
            take = fn(ind-1, tar-nums[ind], nums, dp);
        }

        int notTake=fn(ind-1, tar, nums, dp);

        return dp[ind][tar] = (take or notTake);
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;

        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }

        if(sum % 2 != 0 ) return false;
        int target = sum/2;
        int n=nums.size();

        vector<vector<int>>dp(n, vector<int>(sum, -1));

        int ans=fn(n-1, target, nums, dp);

        // for(auto it:dp){
        //     for(auto bt:it){
        //         cout<<bt<<" ";
        //     }
        //     cout<<endl;
        // }

        return ans;
    }
};