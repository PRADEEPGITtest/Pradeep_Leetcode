class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        // unordered_map<int,int> mapp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     mapp[nums[i]]++;
        // }

        if(nums.size()==0) return 0;

        // int cnt=1,maxi=0;
        // for(int i=1;i<nums.size();i++)
        // {
        //     if( mapp[i-1]<mapp[i] && mapp[i-1]+1==mapp[i])
        //     {
        //         //cout<<nums[i-1]<<" ";
        //         cnt++;
        //         maxi=max(maxi, cnt);
        //     }

        //     else 
        //     {
        //         maxi=max(maxi, cnt);
        //         cnt=1;
        //     } 
        // }
        // return maxi;
        
        set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }

        vector<int>mapp;
        for(auto it:st){
            mapp.push_back(it);
        }
        int cnt=1,maxi=1;
        for(int i=1;i<mapp.size();i++)
        {
            if(mapp[i-1]+1==mapp[i])
            {
                //cout<<nums[i-1]<<" ";
                cnt++;
                maxi=max(maxi, cnt);
            }

            else 
            {
                maxi=max(maxi, cnt);
                cnt=1;
            } 
        }
        return maxi;
        // for(auto it: st)
        // {
        //         //cout<<nums[i-1]<<" ";
        //         cnt++;
        //         maxi=max(maxi, cnt);
            
        // }
        // return maxi;
    }
};