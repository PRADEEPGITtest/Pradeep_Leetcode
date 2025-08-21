class Solution {
public:
    int solve(vector<int>& nums, vector<int> &dp, int ind) {
        
        if (ind <= 0)
            return 0;

        if (dp[ind] != -1)
            return dp[ind];

        int pick = nums[ind] + solve(nums, dp, ind - 2);
        int notpick = 0 + solve(nums, dp, ind - 1);

        return dp[ind] = max(pick, notpick);
    }

    int solve1(vector<int>& nums, vector<int> &dp1, int ind) {
        if (ind == 0)
            return nums[ind];
        if (ind < 0)
            return 0;
        if (dp1[ind] != -1)
            return dp1[ind];

        int pick = nums[ind] + solve1(nums, dp1, ind - 2);
        cout<<pick<<endl;
        int notpick = 0 + solve1(nums, dp1, ind - 1);

        return dp1[ind] = max(pick, notpick);
    }

    int rob(vector<int>& nums) {
        int n = nums.size()-1;

        if(n==0) return nums[0];
        
        vector<int> dp(n+1, -1);
        int noZero = solve(nums, dp, n);

        vector<int> dp1(n+1, -1);

        int withZero = solve1(nums, dp1, n - 1);
        cout<<noZero<<" "<<withZero<<endl;

        for(auto i: dp1)cout<<i<<" ";
        cout<<endl;

        return max(noZero, withZero);
    }
};