class Solution {
public:
    int fn(int i, int j, vector<vector<int>>& obsGrid, vector<vector<int>>&dp){

        if(i<0 || j<0) return 0;
        if(obsGrid[i][j] == 1) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(i==0 && j==0) return 1;

        int up=fn(i-1, j, obsGrid, dp);
        int left=fn(i, j-1, obsGrid, dp);

        return dp[i][j]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obsGrid) {
        int n=obsGrid.size();
        int m=obsGrid[0].size();
        vector<vector<int>>dp(n, vector<int>(m,-1));
        return fn(n-1, m-1, obsGrid, dp);
    }
};