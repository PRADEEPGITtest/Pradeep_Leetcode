class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector< vector<int> > pascal;

        for(int i=0;i<numRows;i++)
        {
            vector<int> row;
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i) row.push_back(1);
                else
                {
                    vector<int> prevRow=pascal[i-1];
                    row.push_back(prevRow[j-1]+prevRow[j]);
                }
            }
            pascal.push_back(row);
        } 
        return pascal;
    }
};