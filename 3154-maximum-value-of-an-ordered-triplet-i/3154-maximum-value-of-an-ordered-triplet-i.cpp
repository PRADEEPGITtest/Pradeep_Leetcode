class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    long long a=nums[i];
                    long long b=nums[j];
                    long long c=nums[k];


                    long long ans=(a-b)*c;
                    if (ans<0) break;
                    maxi=max(maxi,ans);
                }
            }
        }
        return maxi;
    }
};