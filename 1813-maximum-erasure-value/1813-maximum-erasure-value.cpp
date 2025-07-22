class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        map<int,int>mapp;
        int maxi=INT_MIN;
        int l=0, r=0;
        int sum=0;
        while(r<nums.size()){
            mapp[nums[r]]++;
            sum=sum+nums[r];

            while(mapp[nums[r]]>1){
                mapp[nums[l]]--;
                if(mapp[nums[l]]==0) mapp.erase(mapp[nums[l]]);
                sum-=nums[l];
                l++;
            }
            maxi=max(maxi,sum);
            r++;
        }
        return maxi;
    }
};