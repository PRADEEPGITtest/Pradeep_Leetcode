class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        // int right;
        int left;
        //int j=0;
        for(int i=0;i<n;i++)
            {
                if(nums[i]==0)
                {
                    result[i]=nums[i];
                    //j++;
                }
                else if(nums[i]>0)
                {
                    //right=nums[i];
                    //int right_ind=i;
                    int index=(i+nums[i])%n;
                    result[i]=nums[index];
                    //j++;
                }
                else if(nums[i]<0)
                {
                    // left=abs(nums[i])%n;
                    int index1=((i+nums[i])%n+n)%n;
                    result[i]=nums[index1];
                    //j++;
                    
                }
            }
        return result;
    }
};