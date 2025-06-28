class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows=matrix[0].size();
        int col=matrix.size();
        vector<vector<int>> mat(rows, vector<int>(col));
        for(int i=0;i<col;i++){
            for(int j=0;j<rows;j++){
                //swap(matrix[i][j], matrix[j][i]);
                mat[j][i]=matrix[i][j];
            }
        }
        return mat;
    }
};