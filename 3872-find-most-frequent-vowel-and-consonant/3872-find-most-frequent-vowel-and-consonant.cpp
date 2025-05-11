class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> mapp;
        for(int i=0;i<s.size();i++){
             mapp[s[i]]++;
        }
        int maxi=0, maxi1=0;
        for(auto it:mapp){
            if(it.first=='a' || it.first=='e' || it.first=='i' || it.first=='o' || it.first=='u'){
                maxi=max(maxi,it.second);
            }
            else{
                maxi1=max(maxi1,it.second);
            }
        }
        //if(maxi==maxi1 && maxi>0 && maxi1>0) return maxi1;
        
      return maxi+maxi1;

    }
};