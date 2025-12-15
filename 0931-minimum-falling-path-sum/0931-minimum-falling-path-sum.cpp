class Solution {
public:
    int fn(vector<vector<int>>&matrix, vector<vector<int>>&dp, int row, int col, int n){
        if(col<0 || col>n) return 1e9;

        if(row == 0){
            return dp[row][col]=matrix[row][col];
        }

        if(dp[row][col] != -1e5) return dp[row][col];

        int mov1, mov2, mov3;

        mov1=matrix[row][col] + fn(matrix, dp, row-1, col-1, n);
        mov2=matrix[row][col] + fn(matrix, dp, row-1, col, n);
        mov3=matrix[row][col] + fn(matrix, dp, row-1, col+1, n);

        return dp[row][col]=min(mov1, min(mov2, mov3) );
    } 

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //int ans=fn(matrix, 0, 0, n-1);
        vector<vector<int>>dp(n, vector<int>(n,-1e5));
        int mini=1e9;
        for(int i=0; i<n; i++){
            mini=min(mini, fn(matrix, dp, n-1, i, n-1));
        }


        return mini;
    }
};