class Solution {
public:
void solve(vector<int>&nums, vector<int>ds, set<vector<int>>&ans, int ind, int n)
{
    if(ind==n){
        sort(ds.begin(),ds.end());
        ans.insert(ds);
        return ;
    }

    // take:
    ds.push_back(nums[ind]);
    solve(nums,ds,ans,ind+1,n);
    ds.pop_back();

    // not take:
    solve(nums,ds,ans,ind+1,n);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        set<vector<int>> ans;
        int n=nums.size();

        solve(nums,ds,ans,0,n);
        vector<vector<int>> fin(ans.begin(),ans.end());
        return fin;

    }
};