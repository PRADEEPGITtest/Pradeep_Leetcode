class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // int n=fruits.size();
        
        // int maxlen=0;
        // for(int i=0;i<n;i++)
        // {
        //     set<int> s;

        //     for(int j=i;j<n;j++)
        //     {
        //         s.insert(fruits[j]);

        //         if(s.size()<=2)
        //         {
        //             cout<<j-i<<",";
        //             maxlen=max(maxlen,j-i+1);
        //         }
        //         else break;
        //     }
        // }
        // return maxlen;

        int l=0;
        int r=0;
        int maxlen=0;
        unordered_map<int,int> mapp;
        while(r<fruits.size())
        {
            
            mapp[fruits[r]]++;

            if(mapp.size()<=2)
            {
                maxlen=max(maxlen,r-l+1);
            }
            else
            {
                while(mapp.size()>2)
                {
                    mapp[fruits[l]]--;
                    if(mapp[fruits[l]] == 0)
                    {
                        mapp.erase(fruits[l]);
                    }
                    l++;
                }
            }
            r++;
        }
        return maxlen;

        // map<int,int>mpp;
        // for(int i=0;i<fruits.size();i++)
        //     mpp[fruits[i]]+=1;
        // vector<int>nums;
        // auto it=mpp.begin();
        // while(it!=mpp.end()){
        //     nums.push_back(it->second);
        //     it++;
        // }
        // sort(nums.begin(),nums.end(),greater<int>());
        // int sum=0;
        // for(int i=0;i<2 && i<nums.size();i++){
        //     sum+=nums[i];
        // }
        // return sum;
        // int l=0,r=0;
        // map<int,int>mpp;
        // int maxi=0;
        // while(l<fruits.size() && r <fruits.size()){
        //     mpp[fruits[l]]+=1;
        //     while(mpp.size()<=2 && r<fruits.size()){
        //         mpp[fruits[r]]-=1;
        //         r++;
        //     }
        //     maxi=max(maxi,r-l+1);
        // }
        // return maxi;
    }
};