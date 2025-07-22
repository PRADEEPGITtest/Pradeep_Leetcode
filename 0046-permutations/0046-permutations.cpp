class Solution {
public:
    void fn(int n, vector<int>&nums, vector<int>&ds, vector<vector<int>>&ans,int hash[] ){
        // base
        if(n==ds.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<n;i++){
            if(hash[i]==0){
                // take
               
                ds.push_back(nums[i]);
                hash[i]=1;

                fn(n,nums,ds,ans,hash);
                // not take
                hash[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>> ans;
        int n=nums.size();
        int hash[7]={0};
        fn(n,nums,ds,ans,hash);
        return ans;
    }
};