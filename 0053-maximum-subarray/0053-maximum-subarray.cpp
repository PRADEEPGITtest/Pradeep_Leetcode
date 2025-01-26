class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        // vector<int> v;
        // int n=nums.size();
        // int maxLen=0;
        // for (int i=0;i<n;i++)
        // {
        //     int sum=0;
        //     for (int j=i;j<n;j++)
        //     {
        //         // for (int k=i;k<=j;k++)
        //         // {
        //         cout<<nums[j]<<",";
        //         sum=sum+nums[j];  
        //         // }
        //     }
        //     cout<<"\n";
        //     maxLen=max(maxLen,sum);
        // }
        // return maxLen;
        
        int sum=0;
        int maxi=nums[0];

        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];

            if(sum<0)
            {
                sum=0;
            }
            else if(sum>0)
            {
                maxi=max(maxi,sum);
            }
        }
        if(maxi<0)
        {
            sort(nums.begin(),nums.end());
            return nums[nums.size()-1];
        }
        return maxi;
    
    }
};