class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // int ele=0;
        // int cnt=0;
        // vector<int> temp;

        // for(int i=0;i<nums.size();i++)
        // {
        //     if(cnt==0)
        //     {
        //         ele=nums[i];
        //         cnt=1;
        //     }
        //     else if(nums[i]==ele)
        //     {
        //         cnt++;
        //     }
        //     else
        //     {
        //         ele=nums[i];
        //         cnt--;
        //     }
            
        // }
        
        // int cnt1=0;

        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==ele) cnt1++;
        // }

        // if(cnt1>(nums.size()/3)) return temp;
        // else return temp;

        int n=nums.size();
        int a;
        unordered_map<int,int> mapp;
        vector<int> temp;

        for (int i=0;i<n;i++)
        {
            mapp[nums[i]]++;
        }
        for (auto it:mapp)
        {
            if (it.second>(n/3))
            {
                a=it.first;
                //break;
                temp.push_back(a);
            }
        }
        return temp;

    }
};