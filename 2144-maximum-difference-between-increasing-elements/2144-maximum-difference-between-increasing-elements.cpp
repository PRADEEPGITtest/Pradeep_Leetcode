class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi=INT_MIN; int flag=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]<nums[j]){
                int diff=nums[j]-nums[i];
                maxi=max(maxi, diff);
                flag=1;
            }
            }
        }
        if(flag==1) return maxi;
        return -1;
    }
};