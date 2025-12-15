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
        // for(int i=0; i<n; i++){
        //     mini=min(mini, fn(matrix, dp, n-1, i, n-1));
        // }

        // for(auto it:dp){
        //     for(auto &bt:it) cout<<bt<<" ";
        //     cout<<endl;
        // }

        for(int i=0; i<n; i++){
            dp[0][i]=matrix[0][i];
        }

        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++){

                int mov1=1e9, mov2=1e9, mov3=1e9;

                if(j-1 >= 0) mov1=dp[i-1][j-1] + matrix[i][j];

                mov2=dp[i-1][j] + matrix[i][j];

                if(j+1 < n) mov3=dp[i-1][j+1] + matrix[i][j];

                dp[i][j] = min( mov1, min(mov2, mov3) );
            }
        }
       
        int ans=dp[n-1][0];
        for(int i=1; i<n; i++){
            ans=min(ans, dp[n-1][i]);
        }
        return ans;
    }
};