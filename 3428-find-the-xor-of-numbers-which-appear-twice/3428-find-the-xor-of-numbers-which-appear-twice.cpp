class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        // unordered_map<int,int> mapp;
        // vector<int> temp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     mapp[nums[i]]++;
        // }

        // for(auto it:mapp)
        // {
        //     if(it.second>1)
        //     {
        //         temp.push_back(it.first);   
        //     }
        // }

        // if(temp.size()==1) return temp[0];

        // for(int i=1;i<temp.size();i++)
        // {
        //     return temp[i-1] ^ temp[i];
        // }
        // return 0;

        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
            {
                ans=ans^nums[i];
            }
        }
        return ans;
    }
};