class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        int sum_cnt=0;
        for (int i=0;i<nums.size();i++)
        {
            int sum=0;
            sum_cnt=0;
            while(nums[i]!=0)
            {
                sum=sum+nums[i]%10;
                nums[i]/=10;
                sum_cnt++;
            }
            if(sum_cnt%2==0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};