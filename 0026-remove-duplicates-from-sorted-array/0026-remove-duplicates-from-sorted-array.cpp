#include<bits/stdc++.h>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if (nums[i]!=nums[j])
        //         {
                   
        //             arr.push_back(nums[j]);

        //         }
        //     }
        // }

        set<int> s(nums.begin(),nums.end());

        vector<int> arr(s.begin(),s.end());  
        nums=arr;   
        // for(auto it:s)
        // {
        //     if(it.second>1)
        //     {
        //         it.second=1;
        //         arr.push_back(it.first);
        //     }
        // }
        return nums.size();

       
        
    }
};