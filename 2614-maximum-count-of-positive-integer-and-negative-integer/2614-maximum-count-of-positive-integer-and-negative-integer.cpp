class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg_cnt=0, pos_cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                if(nums[i]<0) neg_cnt++;
                else pos_cnt++;
            }
        }
        return max(pos_cnt, neg_cnt);
    }
};