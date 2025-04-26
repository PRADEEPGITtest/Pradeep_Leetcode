class Solution {
public:
    string findCommonResponse(vector<vector<string>>& resp) {
        unordered_map<string,int> mapp;

        for(int i=0;i<resp.size();i++)
            {
                unordered_set<string> st (resp[i].begin(),resp[i].end());
                for(auto jt:st)
                    {
                        mapp[jt]++;
                    }
            }
        string str;
        int maxi=-1;
        for(auto it:mapp)
            {
                if(it.second>maxi || (it.second==maxi && it.first<str))
                {
                    maxi=it.second;
                    str=it.first;
                }
            }
        return str;
    }
};