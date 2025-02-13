class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        // // for(int i=1;i<nums.size();i++)
        // // {
        // //     if(nums[i-1]==nums[i])
        // //     {
        // //         nums[i]=i+1;
        // //         temp.push_back(nums[i-1]);
        // //         temp.push_back(nums[i]);

        // //         break;
        // //     }
        // // }
        // // return temp;
        int dup,mis;
        vector<int>mapp(nums.size()+1,0);
        for(int i=0;i<nums.size();i++)
        {
            mapp[nums[i]]++;
        }
        // int fir=nums[0];
        // cout<<fir;
        for(int i=1;i<=nums.size();i++)
        {   
            if(mapp[i]==2)
            {
                dup=i;
            }
            if(mapp[i]==0)
            {
                mis=i;  
            }
            
        }

        return {dup,mis};


        // vector<int> temp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==i+1)
        //     {
        //         continue;
        //     }
        //     else
        //     {
        //         temp.push_back(nums[i]);
        //         temp.push_back(i+1);
        //         break;
        //     }
        // }
        // return temp;

        // vector<int> orgnums;
        // vector<int> temp;

        // for(int i=1;i<=nums.size();i++)
        // {
        //     orgnums.push_back(i);
        // }

        // int i=0,j=0;
        // while(j<nums.size())
        // {
        //     if(nums[i]==orgnums[j])
        //     {
        //         i++;
        //         j++;

        //     }
        //     else
        //     {
        //         temp.push_back(nums[i]);
        //         temp.push_back(orgnums[j]);
        //         break;
        //     }
        // }
        // return temp;
    }
};