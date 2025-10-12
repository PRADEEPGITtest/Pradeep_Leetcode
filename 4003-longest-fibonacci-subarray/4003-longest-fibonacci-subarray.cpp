class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int cnt=2, maxi=INT_MIN;
        for(int i=1; i<nums.size()-1; i++){
            if(nums[i-1]+nums[i] == nums[i+1]){
                cnt++;
            }
            else{
               
                cnt=2;
            }
            maxi=max(maxi, cnt);
        }
        if(maxi == INT_MIN) return cnt;
        return maxi;
    }
};