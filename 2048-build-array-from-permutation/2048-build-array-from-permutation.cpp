class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for (int i=0;i<n;i++)
        {
            int c=nums[nums[i]];
            ans.push_back(c);
        }
       return ans; 
    }
};