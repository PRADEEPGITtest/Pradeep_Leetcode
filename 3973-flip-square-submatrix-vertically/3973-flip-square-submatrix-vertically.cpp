class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        //int m=grid.size()-1;
        int i=x;
        int j=y;

        int d=i+k-1;
        int c=j+k-1;

        //int n=0;
        //if(y==k) return grid;
        while(i<d){
            //if(i==d) break;
            while(j<=c){
                swap(grid[i][j], grid[d][j]);
                j++;
            }
            j=y;
            //n++;
            i++;
            d--;
        }
        return grid;
        // i dont know what to do now a bit confused . i will upsolve after contest... ;
    }
};