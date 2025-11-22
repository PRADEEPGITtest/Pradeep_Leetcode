class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int tar=nums[nums.size()-1], mini=0; 
        for(int i=0; i<nums.size(); i++){
            mini+=abs(nums[i]-tar);
        }

        return mini;
    }
};