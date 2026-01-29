class Solution {
    int fn(vector<vector<int>>& grid, vector<vector<int>>&dp, int row, int col, int n){
        if(col>n || col<0 ) return 1e9;
        if(row==0) return grid[row][col];
        if(dp[row][col]!=-1) return dp[row][col];

        int ans=1e9;
        for(int i=0; i<=n; i++){
            if(col!=i){
                ans = min(ans, (grid[row][col] + fn(grid, dp, row-1, i, n)));
            }
        }
        return dp[row][col]=ans;
    }
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int path_min=1e9;
        vector<vector<int>>dp(n, vector<int>(n+1, -1));
        // for(int i=0; i<n; i++){
        //     path_min=min(path_min, fn(grid, dp, n-1, i, n-1));
        // }
        // return path_min;

        //Tabulation>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        
        for(int i=0; i<n; i++){
            dp[0][i]=grid[0][i];
        }

        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++){
                int ans=1e9;
                for(int k=0; k<n; k++){
                    if(j!=k)
                        ans=min(ans, dp[i-1][k] + grid[i][j]);
                }
                dp[i][j]=ans;
            }
            
        }
        int mini=dp[n-1][0];
        for(int i=0; i<n; i++){
            mini=min(mini, dp[n-1][i]);
        }

        return mini;
    }
};