class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini1=INT_MAX;
        int mini2=INT_MIN;
        if(nums.size()-1==0) return nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
                mini1=min(mini1, nums[i]);
            else if(nums[i]<0)
                mini2=max(mini2, nums[i]);
        }
        if(abs((long long)mini1)>abs((long long)mini2)) return mini2;
        else return mini1;
    }
};