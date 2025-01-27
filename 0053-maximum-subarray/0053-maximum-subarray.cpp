class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        // vector<int> v;
        // int n=nums.size();
        // int maxi=INT_MIN;
        // for (int i=0;i<n;i++)
        // {
        //     int sum=0;
        //     for (int j=i;j<n;j++)
        //     {
        //         // for (int k=i;k<=j;k++)
        //         // {
        //         cout<<nums[j]<<",";
        //         sum=sum+nums[j];  
        //         maxi=max(maxi,sum);
        //         // }
        //     }
        //     cout<<"\n";
            
        // }
        // return maxi;
        
        int sum=0;
        int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            maxi=max(maxi,sum);
            
            if(sum<0)
            {
                sum=0;
            }
            // else if(sum>0)
            // {
                
            //}
        }
        // if(maxi<0)
        // {
        //     sort(nums.begin(),nums.end());
        //     return nums[nums.size()-1];
        // }
        return maxi;
    
    }
};