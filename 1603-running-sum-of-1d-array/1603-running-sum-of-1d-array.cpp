class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int l=0;
        int r=0;
        int sum=0;
        vector<int> temp;

        while(r<nums.size())
        {
            sum=sum+nums[r];
            temp.push_back(sum);
            r++;
        }
        return temp;
    }
};