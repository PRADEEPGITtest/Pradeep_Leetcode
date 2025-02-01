class Solution {
public:
    string findValidPair(string s) {
       
       unordered_map<char,int> mapp;
       string res; 
       for(int i=0;i<s.size();i++)
       {
            mapp[s[i]]++;
       }

    //    for(auto it:mapp)
    //    {
    //     if(abs(it.first-'0') == it.second)
    //     {
    //         // char a=it.first;
    //         res.push_back(it.first);
    //     }
    //    }

    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]!=s[i])
        {
            if(s[i-1]-'0'==mapp[s[i-1]] && s[i]-'0' == mapp[s[i]])
            {
                res.push_back(s[i-1]);
                res.push_back(s[i]);
                break;
            }
        }
    }
    return res;

       
       
    }
};