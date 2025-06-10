class Solution {
public:
    int maxDifference(string s) {
        map<int,int> mapp;
        int n=s.size();
        for(int i=0;i<n;i++){
            mapp[s[i]]++;
        }
        int maxi1=INT_MIN, mini=INT_MAX;
        for(auto it:mapp){
            if(it.second%2!=0){
                maxi1=max(maxi1,it.second);
            }
            else{
                mini=min(mini,it.second);
            }
        }

        return maxi1-mini;


    }
};