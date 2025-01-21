class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr;
        int flag=0,start;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                arr.push_back(i);
                start=i;
                flag=1;
                break;
            }
        }

        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==target)
            {
                arr.push_back(i);
                flag=1;
                break;
            }
        }

        if(flag==0){
            arr.push_back(-1);
            arr.push_back(-1);
        }
        return arr;

        // int low=0;
        // int high=nums.size()-1;
        // int i=0;
        // vector<int> arr;
        // while(low<=high)
        // {
        //     mid=(low+high)/2;

        //     if(nums[mid]== target)
        //     {
        //         arr.push_back(mid);
        //         for(int i=mid+1;i<nums.size();i++)
        //         {
        //             if(target==nums[i])
        //             {
        //                 arr.push_back(i);
        //             }
        //         }
        //     }

        //     else if(nums[mid]<target) 
        //     {

        //     }

        //}
    }
};