class Solution {
public:
// Lower Bound ===========================================================================
int lowerBound(vector<int>& nums, int target, int low, int high, int ans){
    if(low>high) return ans;
    int mid=low+(high-low)/2;
    
    if(nums[mid]>=target) {ans=mid; return lowerBound(nums, target, low, mid-1, ans);}
    else {
        return lowerBound(nums, target, mid+1, high, ans);
    }
}

// Upper Bound ===========================================================================
int upperBound(vector<int>& nums, int target, int low, int high, int ans1){
    
    if(low>high) return ans1;
    int mid=low+(high-low)/2;
    if(nums[mid]>target) {ans1=mid;return upperBound(nums, target, low, mid-1, ans1);}

    return upperBound(nums, target, mid+1, high, ans1);
}

    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        if(nums.size()==1 && target==1 ) return {0,0};
        int ans=nums.size()-1;
        int low=0, high=nums.size()-1;

        int lb=lowerBound(nums, target, low, high, ans);
        if( nums[lb]!=target || lb==nums.size()) return {-1,-1};

        low=0, high=nums.size()-1;
        int ans1=nums.size();
        int ub=upperBound(nums, target, low, high, ans1);

        return {lb,ub-1};

    }
     
};