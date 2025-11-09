class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int mini=1e9;

        if(nums.size()<=2){
            return -1;
        }

        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                for(int k=j+1; k<nums.size(); k++){
                    if(nums[i]==nums[j] && nums[j]==nums[k] && nums[i]==nums[k])
                    {
                        int ans=abs(i-j)+abs(j-k)+abs(k-i);
                        mini=min(mini, ans);
                    }
                }
            }
        }
        if(mini == 1e9) return -1;
        return mini;
    }
};