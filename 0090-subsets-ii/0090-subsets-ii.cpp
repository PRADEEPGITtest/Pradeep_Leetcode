class Solution {
public:
// BRUTE FORCE ALGO
// *************************************************************************


//void solve(vector<int>&nums, vector<int>ds, set<vector<int>>&ans, int ind, int n)
// {
//     if(ind==n){
//         sort(ds.begin(),ds.end());
//         ans.insert(ds);
//         return ;
//     }

//     // take:
//     ds.push_back(nums[ind]);
//     solve(nums,ds,ans,ind+1,n);
//     ds.pop_back();

//     // not take:
//     solve(nums,ds,ans,ind+1,n);
// }

//*****************************************************************************

void fn(int ind, vector<vector<int>>&ans, vector<int>ds, vector<int>&nums){
    ans.push_back(ds);
    for(int i=ind;i<nums.size();i++){
        if(i!=ind && nums[i]==nums[i-1]) continue;
        ds.push_back(nums[i]);
        fn(i+1,ans,ds,nums);
        ds.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        //set<vector<int>> ans;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();

        //solve(nums,ds,ans,0,n);
        //vector<vector<int>> fin(ans.begin(),ans.end());
        //return fin;

        // **************
        // OPTIMAL APROACH

        fn(0,ans,ds,nums);
        return ans;



    }
};