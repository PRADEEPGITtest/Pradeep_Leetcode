class Solution {
public:
    int fn(vector<int>& nums, int goal)
    {
         long long cnt=0;
        long long sum=0;
        int l=0,r=0;
        if(goal<0) return 0;

        while(r<nums.size())
        {
            
            
            sum+=nums[r];

            while(sum>goal && l<=r)
            {
                
                sum-=nums[l];
                l++;
            }

            cnt=cnt+(r-l+1);

            r++;
        }
        return cnt;

    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        
        int a=fn(nums,goal)-fn(nums,goal-1);
        return a;

        // for(int i=0;i<nums.size();i++)
        // {
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++)
        //     {
        //         sum+=nums[j];
        //         if(sum==goal)
        //         {
        //             cnt++;
        //         }
        //         // else if(sum>goal)
        //         // {
        //         //     j--;
        //         // }
        //     }
        // }
        // return cnt;
    }
};