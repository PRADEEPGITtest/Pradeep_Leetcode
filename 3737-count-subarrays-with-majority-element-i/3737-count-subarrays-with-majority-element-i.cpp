class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int tar) {
        int sum=0, n=nums.size();
        for(int i=0;i<n; i++){
            int cnt=0;
            for(int j=i; j<n; j++){
                if(nums[j] == tar) cnt++;
                else cnt-=1;

                if(cnt>0) sum++;
            }
            
        }
        return sum;
    }
};