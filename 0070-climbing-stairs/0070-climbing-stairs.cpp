class Solution {
public:
    int fn(int n, vector<int> &dp)
    {
        if(n<0) return 0;
        if(n==0 ) return 1;
        if(dp[n]!= -1) return dp[n];

        int left=fn(n-1,dp);
        int right=fn(n-2,dp);

        return dp[n]=left+right;
    } 
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);

        return fn(n,dp);
    } 
};