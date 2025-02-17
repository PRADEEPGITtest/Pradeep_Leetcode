class Solution {
public:
    bool checkString(string s) {
        int ind;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='a')
            {
                ind=i;
                break;
            }
        }

        for(int i=ind+1;i<s.size();i++)
        {
            if(s[i-1]!=s[i])
            {
                return false;
            }
        }
        return true;
    }
};