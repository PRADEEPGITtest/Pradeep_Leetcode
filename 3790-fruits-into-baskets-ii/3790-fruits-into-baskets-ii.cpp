class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int i=0, j=0;
        int cnt=0;

        for(int i=0;i<fruits.size();i++){
            for(int j=0;j<baskets.size();j++){
                if(baskets[j]>=fruits[i]){
                   cnt++;
                   baskets[j]=0;
                   break;
                }
            }                                 
        }
        return fruits.size()-cnt;
       
    }
};