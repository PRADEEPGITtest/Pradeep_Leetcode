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

           
        // for(auto it:s)
        // {
        //     if(it.second>1)
        //     {
        //         it.second=1;
        //         arr.push_back(it.first);
        //     }
        // }

        // below codes or correct

        // implementation:1
        // set<int> s(nums.begin(),nums.end());

        // vector<int> arr(s.begin(),s.end());  
        // nums=arr;
        // return nums.size();

        // implementation:2

        int i=0;
        int j=nums[1];

        for(int j=1;j<n;j++)
        {
            if(nums[j]!=nums[i])
            {
                nums[i+1]=nums[j];
                i++;
            }
        }

        return i+1;


       
        
    }
};