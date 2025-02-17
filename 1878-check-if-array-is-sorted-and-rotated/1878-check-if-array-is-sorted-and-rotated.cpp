class Solution {
public:
    bool check(vector<int>& nums) {
        int ind;
        int cnt=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
            {
                //cout<<nums[i]<<" ";
                ind=i;
                break;
            }
            cnt++;
        }

        if(cnt==nums.size()) return true;
        int flag=0;

        int n=nums.size();
        if (ind == nums.size() - 1){
            if (nums[ind]<=nums[0]){
                flag = 1;
            }
        }


        for(int j=ind+1;j<=nums.size()-1;j++)
        {
            if (nums[j]<=nums[0]  && nums[j-1]<=nums[j]){
                flag = 1;
            }
            else return false;
            // if(nums[j]<=nums[0] && nums[j+1]>=nums[j])
            // {
            //     flag=1;
            // }
            // else return false;
        }
        if(flag==1) return true;
        else return false;
    }
};