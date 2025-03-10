class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //int n=nums.size();
        // for (int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if (nums[i]==nums[j] && abs(i-j)<=k)
        //         {
        //             return true;
        //         }
        //     }
        // }
        // return false;

        // correct logic but won't work for big testcases...

    //     int i=0;
    //     int j=n-1;

    //     while(n>0)
    //     {
            
    //         if(i>j)
    //         {
    //             break;
    //         }
    //         if(nums[i]==nums[j] && abs(i-j)<=k)
    //         {
    //             return true;
    //         }
    //         else
    //         {
    //             i++;
    //             j--;
    //         }
    //     }
    //     return false;
    // } wrong code on two pointers...
    
    //  Hashing is the best method for duplicate sum..

    // First-of-all mapping nums in mapp and make count on the index of nums
    // Check for the condition if true return
                            // else add or change the position of the nums in
                            // the mapp..
    // If the traversal doesn't meet return false;

    unordered_map<int,int> mapp;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        if(mapp.count(nums[i]))
        {
            if(abs(i-mapp[nums[i]])<=k)
                return true;
        }
        mapp[nums[i]]=i;

    }
    return false; 
    }
};