class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dim) {
        int prod;
        int maximumArea=INT_MIN;
        float maxiDiag=INT_MIN;
        for(int i=0;i<dim.size();i++){

            int ans=(dim[i][0]*dim[i][0]) + (dim[i][1]*dim[i][1]);
            float sqt=sqrt(ans);
            int area = dim[i][0] * dim[i][1];
            if(maxiDiag < sqt){
                maxiDiag=max(maxiDiag,sqt);
                maximumArea = area;
            }
            else if(maxiDiag == sqt){
                maximumArea = max(maximumArea, area);
            }
        }
        return maximumArea;
    }
};