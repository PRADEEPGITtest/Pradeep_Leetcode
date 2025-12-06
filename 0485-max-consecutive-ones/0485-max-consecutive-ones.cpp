class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int i=0, maxi=0;
        while(i<nums.size()){
            if(nums[i]==1){
                cnt++;
            }
            else{
                maxi=max(maxi, cnt);
                cnt=0;
            }
            i++;
        }
        maxi=max(maxi, cnt);
        return maxi;
    }
};