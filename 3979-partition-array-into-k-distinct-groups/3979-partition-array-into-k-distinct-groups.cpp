class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int uniq=0, dup=0;
        unordered_map<int,int>mapp;
        for(int i=0;i<nums.size();i++){
            mapp[nums[i]]++;
        }
        int n=nums.size();
        if(n==1) return true; // edge case:1
        else if(n%k!=0) return false;

        //cout<<uniq<<" "<<dup<<" "<<n<<endl;
        for(auto it:mapp){
            if(it.second>(n/k)) return false;
        }
        return true;
            
    }
};