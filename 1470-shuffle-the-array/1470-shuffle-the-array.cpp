class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0, j=n;
        vector<int>a;
        while(j<nums.size()){
            a.push_back(nums[i]);
            a.push_back(nums[j]);
            i++, j++;
        }
        return a;
    }
};