class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int,int> mapp;
        for(int i=0;i<nums.size();i++){
            mapp[nums[i]]++;
        }
        int cnt=0;
        for(auto it:mapp){
            int s=it.second;
            for(int i=1;i<=s;i++){
                
                if(s%i==0) cnt++;
                
                //cout<<i<<endl;
            }
            if(cnt==2) return true;
            cnt=0;
        }
        
        return false;
    }
};