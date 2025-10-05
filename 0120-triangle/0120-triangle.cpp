class Solution {
public:
    int fn(int row, int col, int n, vector<vector<int>>&triangle, vector<vector<int>>&dp){
        if(row == n-1 ) return triangle[row][col];

        if(dp[row][col] != -1) return dp[row][col];

        int move_1=triangle[row][col] + fn(row+1, col, n, triangle, dp);
        int move_2=triangle[row][col] + fn(row+1, col+1, n, triangle, dp);

        return dp[row][col]=min(move_1, move_2);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int row=0, col=0;
        int n=triangle.size();
        vector<vector<int>>dp(n, vector<int>(n, -1));
        //int ans=fn(row, col, n, triangle, dp);

        // for(auto it:dp){
        //     for(auto bt:it){
        //         cout<<bt<<" ";
        //     }
        //     cout<<endl;
        // }

        // return ans;

        for(int j=n-1; j>=0; j--){
            dp[n-1][j]=triangle[n-1][j];
        }

        for(int i=n-2; i>=0; i--){
            for(int j=0; j<=i; j++){
                int move1=triangle[i][j] + dp[i+1][j];
                int move2=triangle[i][j] + dp[i+1][j+1];

                dp[i][j]=min(move1 ,move2);
            }
        }

        return dp[0][0];
    }
};