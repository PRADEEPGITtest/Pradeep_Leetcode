class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int lgcnt=1, maxi=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]) {
                lgcnt++;
                maxi=max(maxi,lgcnt);
            }
            else lgcnt=1;
        }
        return maxi;
    }
};