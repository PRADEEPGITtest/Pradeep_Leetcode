class Solution {
public:
    int sub_cnt(vector<int>& nums, int k)
    {
        int l=0,r=0;

        int sum=0,cnt=0;

        while(r<nums.size())
        {
            // if(nums[r]%2=0 && odd_cnt<=k)
            // {
            //     odd_cnt+=1;
            // }

            // if it is odd goes as 1 or even goes as 0
            sum+=(nums[r]%2); 
        
            while(sum>k && l<=r)
            {
                sum-=(nums[l]%2);
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {

        int ans=sub_cnt(nums,k)-sub_cnt(nums,k-1);
        return ans;


        // int odd_cnt=0;
        // int sub_cnt=0;
        // int i=0,j=0;
        // while(j<nums.size())
        // {
        //     if(nums[i]%2!=0)
        //     {
        //         odd_cnt++;
        //     }

        //     if(odd_cnt==k)
        //     {
        //         sub_cnt++;
        //         odd_cnt=0;
        //         i++;
        //     }

        //     j++;
        // }
        // return sub_cnt;

       
    }
};