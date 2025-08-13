class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0, high=nums.size()-1;
        int mini=INT_MAX;
        while(low<high){
            int mid=low+(high-low)/2;

            //if(nums[low]==nums[mid] && nums[mid]==nums[high]) {low+=1; high-=1;}

            // to check left part of array has min or not
            if(nums[mid]<nums[high]) high=mid;
            // to check right part of array has min or not 
            else if(nums[mid]>nums[high]) low=mid+1;
            else high--;
        }
        return nums[low];
    }
};