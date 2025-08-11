class Solution {
public:
    int search(vector<int>& nums, int tar) {
        
        int low=0, high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==tar) return mid;
            // left part
            if(nums[low]<=nums[mid]){
                if(nums[low]<=tar && tar<=nums[mid]) high=mid-1;
                else low=mid+1;
            }
            else{
                if(nums[mid]<=tar && tar<=nums[high]) low=mid+1;
                else high=mid-1;
            }
        }
        return -1;


        // it accepts for the problem but use binary serach for better learning

        //    for(int i=0;i<nums.size();i++){
        //     if(tar==nums[i]) return i;
        //    }
        //    return -1;
    }
};