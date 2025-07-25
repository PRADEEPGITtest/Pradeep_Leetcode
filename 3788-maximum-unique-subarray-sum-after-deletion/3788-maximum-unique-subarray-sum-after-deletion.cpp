class Solution {
public:
    int maxSum(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int> hash;
        int maxi=INT_MIN;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++)
            {
                sum+=nums[i];
                hash[nums[i]]++;
                
                if(nums[i]<0)
                {
                    //cout<<nums[i]<<" ";
                    sum=sum-nums[i];
                    hash[nums[i]]--;
                }
               
                
                while(hash[nums[i]]>1)
                {
                    //cout<<hash[nums[i]]<<" ";
                    sum-=nums[i];
                    hash[nums[i]]--;
                }
               
                maxi=max(maxi,sum);
                
            }
            
            if(maxi<=0)
                maxi=max(INT_MIN,*max_element(nums.begin(),nums.end()));
                
        return maxi;
    }
};