class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int odd_cnt=0;
        int even_cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&1) odd_cnt+=1;
            else even_cnt+=1;
        }
        
        nums.clear();

        for(int i=0;i<even_cnt;i++)
        {
            nums.push_back(0);
        }

        for(int i=0;i<odd_cnt;i++)
        {
            nums.push_back(1);
        }
        return nums;
    }
};