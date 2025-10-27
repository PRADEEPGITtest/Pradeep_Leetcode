class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(long long i=0; i<nums.size();i++){
            if(nums[i]<0){
                nums[i]= -nums[i];
            }
        }

        sort(nums.begin(), nums.end());

        for(auto it:nums) cout<<it<<" ";
        cout<<endl;

        long long n=nums.size();

        long long size=(n-1)/2;

        long long sum=0, diff=0;

        if(n%2==0)
        {
            for(long long i=0; i<=size; i++){
                diff+=(nums[i]*nums[i]);
            }

            for(long long i=size+1; i<n; i++){
                sum+=(nums[i]*nums[i]);
            }
        }
        else{
            for(long long i=0; i<size; i++){
                diff+=(nums[i]*nums[i]);
            }

            for(long long i=size; i<n; i++){
                sum+=(nums[i]*nums[i]);
            }
        }

        

        cout<<sum<<" "<<diff<<endl;

        return (sum-diff);


    }
};