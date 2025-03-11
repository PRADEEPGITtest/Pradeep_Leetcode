class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int maxlen=0;
        int sum=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     int hash[100000]={0};
        //     sum=0;
        //     for(int j=i;j<nums.size();j++)
        //     {
        //         if(hash[nums[j]]==1) {
        //             break;
        //         }

        //         sum+=nums[j];
        //         hash[nums[j]]=1;
        //     }
        //     maxlen=max(maxlen, sum);
        // }
        // return maxlen;

        int l=0,r=0;
        unordered_map<int,int> mapp;
        while(r<nums.size())
        {
            mapp[nums[r]]++;
            sum=sum+nums[r];

            while(mapp[nums[r]]>1)
            {
                sum-=nums[l];
                mapp[nums[l]]--;
                l++;
            }

            maxlen=max(maxlen, sum);
            r++;
        }
        return maxlen;
    }
};