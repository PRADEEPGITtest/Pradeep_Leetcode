class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int startRow, startCol, endRow, endCol;
        int initialSt=0;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){

                if(initialSt==0 && grid[i][j]==1){
                    initialSt=1;
                    startRow=i;
                    endRow=i;

                    startCol=j;
                    endCol=j;
                }

                else if(initialSt==1 && grid[i][j]==1){
                    endRow=i;
                    if(startCol>j){
                        startCol=j;
                    }

                    if(endCol<j){
                        endCol=j;
                    }
                }
            }
        }
        int ans=(abs(startRow-endRow)+1)*(abs(startCol-endCol)+1);
        return ans;
    }
};