class Solution {
public:
    void fn(int ind, vector<int>&nums, set<vector<int>>&ans){
        if(nums.size()==ind){
            ans.insert(nums);
            return;
        }

        for(int i=ind;i<nums.size();i++){
            swap(nums[ind], nums[i]);
            fn(ind+1, nums, ans);
            swap(nums[ind], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        fn(0, nums, ans);
        vector<vector<int>>fin(ans.begin(),ans.end());
        return fin; 
    }
};