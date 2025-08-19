class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt=0, fin=0;
        for(long long i=0;i<nums.size();i++){
            if(nums[i]==0){
                cnt++;
                
            }
            else {
                fin=fin+cnt*(cnt+1)/2;
                cnt=0;
            }
        }
        if(cnt>0) fin+=(cnt*(cnt+1)/2);
        return fin;
        
    }
};