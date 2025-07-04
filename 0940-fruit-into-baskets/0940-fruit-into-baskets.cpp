class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0;
        int j=0;
        map<int,int> mapp;
        int maxi=INT_MIN;

        while(i<fruits.size() && j<fruits.size()){
            mapp[fruits[j]]++;
            if(mapp.size()<=2){
                maxi=max(maxi,j-i+1);
            }
            else if(mapp.size()>2){
                while(mapp.size()>2 ){
                    mapp[fruits[i]]--;
                    if(mapp[fruits[i]]==0){
                        mapp.erase(fruits[i]);
                    }
                    i++;
                }
                maxi=max(maxi,j-i+1);
            }
            j++;
        }

        return maxi;

    }
};