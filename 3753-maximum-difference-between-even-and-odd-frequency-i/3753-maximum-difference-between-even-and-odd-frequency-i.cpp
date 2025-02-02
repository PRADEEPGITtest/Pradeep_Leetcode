class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> mapp;

        for(int i=0;i<s.size();i++)
        {
            mapp[s[i]]++;
        }

        int maxi1=INT_MAX;
        int maxi2=0;

        for(auto i=0;i<s.size();i++)
        {
            if(mapp[s[i]]%2==0)
            {
                maxi1=min(maxi1,mapp[s[i]]);
            }
            else if(mapp[s[i]]%2!=0)
            {
                maxi2=max(maxi2,mapp[s[i]]);
            }
        }

        return maxi2-maxi1;
    }
};