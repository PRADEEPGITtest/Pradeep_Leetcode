class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        sort(inter.begin(),inter.end());
        int i=0;
        while(i<inter.size()-1){
            if(inter[i][1]>=inter[i+1][0]){
                vector<int>temp;

                if(inter[i][1]>inter[i+1][1]){
                    temp.push_back(inter[i][0]);
                    temp.push_back(inter[i][1]);
                }
                else {
                    temp.push_back(inter[i][0]);
                    temp.push_back(inter[i+1][1]);
                }

                inter.erase(inter.begin()+i+1);
                inter.erase(inter.begin()+i);
                

                inter.emplace(inter.begin()+i,temp);
            }
            else i++;
        
        }
        return inter;
    }
};