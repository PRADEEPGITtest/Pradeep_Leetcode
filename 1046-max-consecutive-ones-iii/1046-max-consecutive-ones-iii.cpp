class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // BY CREATING SUBARRAYS OF ARRAY...

        // int maxlen=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     int zero=0;

        //     for(int j=i;j<nums.size();j++)
        //     {
        //         if(nums[j]==0)
        //         {
        //             zero++;
        //         }
        //         if(zero<=k)
        //         {
        //             maxlen=max(maxlen,j-i+1);
        //         }
        //         else break;
                
        //     }
        // }

        // USING SLIDING WINDOW...

        int l=0,r=0;
        int zero=0;
        int maxlen=0;

        while(r<nums.size())
        {
            if(nums[r]==0)
            {
                zero++;
            }

            while(zero>k)
            {
                if(nums[l]==0) zero--;
                l++;
            }

            if(zero<=k)
            {
                maxlen=max(maxlen,r-l+1);
            }

            r++;
        }

        return maxlen;
    }
};