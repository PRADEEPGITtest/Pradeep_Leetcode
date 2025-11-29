class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum1=0;
        for(int i=0; i<nums.size(); i++) sum1+=nums[i];

        return sum1%k;
    }
};