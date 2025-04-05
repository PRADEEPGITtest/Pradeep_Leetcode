class Solution {
public:
    int fn(int ind, int sum,vector<int>&nums,int n)
    {
        if(ind==n)
        {
            return sum;
        }

        int a=nums[ind];
        int take=fn(ind+1,sum^a,nums,n);
        int not_take=fn(ind+1,sum,nums,n);

        return take+not_take;
    }

    int subsetXORSum(vector<int>& nums) {
        // vector<int> ds;
        // vector<int> temp;
        int n=nums.size();
        // int ans=0;

        return fn(0,0,nums,n);
    }
};