class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> temp;
        int n=nums.size();
        int ind=0;
        for(int i=0;i<n;i++)
        {
            if(val!=nums[i])
            {
                nums[ind]=nums[i];
                ind++;
            }
        }
       
       
        return ind;
    }
};