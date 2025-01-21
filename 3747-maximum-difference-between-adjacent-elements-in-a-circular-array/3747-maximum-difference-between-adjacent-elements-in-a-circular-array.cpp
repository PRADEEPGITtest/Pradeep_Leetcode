class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxi=0;
        for(int i=1;i<nums.size();i++)
        {
            int a=abs(nums[i-1]-nums[i]);
            maxi=max(maxi,a);
        }
        int n=nums.size()-1;
        maxi=max(maxi,abs(nums[0]-nums[n]));
        
        return maxi;
    }
};