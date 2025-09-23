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
        //vector<vector<int>>dp(n, vector<int>(m,-1));
        //return fn(n-1, m-1, obsGrid, dp);

        int dp[n][m];

        for(int i=0; i<n; i++){
            
            for(int j=0; j<m; j++){
                
                if(obsGrid[i][j] == 1) dp[i][j]=0;
                else if(i==0 && j==0) dp[i][j]=1;

                else{

                    int up=0, left=0;
                    if(i>0) up=dp[i-1][j];
                    if(j>0) left=dp[i][j-1];

                    dp[i][j]=up+left;
                }

            }
        }
        return dp[n-1][m-1];
    }
};