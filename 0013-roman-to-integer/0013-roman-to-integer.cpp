class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mapp;

        mapp={
              {'I',1},
              {'V',5},            
              {'X',10},
              {'L',50},
              {'C',100}, 
              {'D',500},
              {'M',1000}
              
              };

        int res=0;

        for(int i=0;i<s.size()-1;i++)
        {
            if(mapp[s[i]]<mapp[s[i+1]]) res=res-mapp[s[i]];
            else res=res+mapp[s[i]];
        }

        return res+mapp[s[s.size()-1]];

    }
};