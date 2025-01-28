class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        // unordered_map<int,int> mapp;
        // vector<int> v;
        // int n=nums.size();
        // int max_len=0,cnt=0;
        // for (int i=0;i<n;i++)
        // {
        //     if(nums[i]%2==0)
        //     {
        //         //mapp[nums[i]]++;
        //         max_len=max(max_len,nums[i]);
        //     }
        //     else if(nums[i]%2!=0)
        //     {
        //         cnt++;
        //         if (cnt==n)
        //         {
        //             return -1;
        //         }
        //     }
        // }
        // return max_len;
        // for(int j=0;j<n;j++)
        // {
        //     if (nums[i]%2==0)
        //     {

        //     }
        // }
        // for(auto it:mapp)
        // {
        //     // if(it.first%2==0)
        //     // {
        //     //     max_len=max(max_len,it.first);
        //     // }
        // }
        // return max_len;
        // for (int j=0;j<n;j++)
        // {
        //     if (v[i]<v[i+1])
        //     {

        //     }
        // }

        map<int,int> mapp;
        int a=0;
        int res;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                mapp[nums[i]]++;

        }
        int n=mapp.size();
        if(n==0)
        {
            return -1;
        }
        //vector<int> temp;
        for(auto it:mapp)
        {

            if(it.second>a)
            {
                a=it.second;
                res=it.first;
            }
        }
        return res;
    }
};