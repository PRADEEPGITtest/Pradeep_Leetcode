class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        vector<int> temp;
        int l=0, r=0;
        while(r<nums.size())
            {
                temp.push_back(nums[r]);
                r++;
                if(temp.size()==k)
                {
                    for(int i=0;i<k ;i++)
                    {
                        hash[temp[i]]+=1;
                    }
                    
                    temp.clear();
                    l++;
                    r=l;
                }
                
            }
        int maxi=-1;

        for(auto it:hash)
            {
                cout<<it.first<<"-->"<<it.second<<"\n";
            }

        for(auto it:hash)
            {
                // if(it.second>1 && it.first==0 && k>1)
                // {
                //     maxi=max(maxi, it.first);
                // }
                if(nums.size()==k || it.second==1) maxi=max(maxi, it.first); 
                // if(it.second==1)
                // {
                //     maxi=max(maxi, it.first);
                // }
            }
        return maxi;
    }
};