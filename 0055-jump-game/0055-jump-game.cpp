class Solution {
public:
    bool canJump(vector<int>& nums) {
        // learned from striver 
        
        int maxi=0;
        int n=nums.size()-1;
        for(int i=0;i<nums.size();i++)
        {
            
            if(i>maxi) return false;
            int a=i+nums[i];
            maxi=max(maxi,a);
        }
        return true;
    }
};