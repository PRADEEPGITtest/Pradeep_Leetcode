class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
            {
                nums[i-1]=nums[i-1]*2;
                nums[i]=0;
            }
        }
        // int ind=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]!=0)
        //     {
        //         nums[ind]=nums[i];
        //         ind++;
        //     }
        // }
        // for(int i=ind;i<nums.size();i++)
        // {
        //     nums[i]=0;
        // }

        // for reducing loop on adding zeros to end
        // do this!
        // optimized code 0(n);
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[j],nums[i]);
                j++;
            }
        }

        return nums;
    }
};