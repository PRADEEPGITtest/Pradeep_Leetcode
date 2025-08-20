class Solution {
public:
    // int solve(vector<int>&nums, int ind, vector<int>&dp){
    //     if(ind==0) return nums[ind];
    //     if(ind<0) return 0;
    //     if(dp[ind]!=-1) {return dp[ind];}

    //     int pick=nums[ind]+solve(nums, ind-2, dp);
    //     int notpick= 0+solve(nums, ind-1, dp);

    //     int ans=dp[ind]=max(pick, notpick);
    //     return ans;
    // }
    int rob(vector<int>& nums) {
        int n=nums.size();
        //vector<int>dp(n+1,-1);

        //int ans = solve(nums, n, dp);
        // for(auto i: dp) cout<<i<<" ";
        // cout<<endl;

        //return ans;
        vector<int>dp(n);
        dp[0]=nums[0];

        for(int i=1;i<n;i++){
            int take=nums[i];
            if(i>1) {
                take+=dp[i-2];
            }
            int nottake=0+dp[i-1];
            dp[i]=max(take, nottake);
        }
        return dp[n-1];
    }
};