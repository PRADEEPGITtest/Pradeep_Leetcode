class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l=0;
        int r=0;
        int cnt=0;
        while(r<t.size())
        {
            if(s[l]==t[r])
            {
                cnt++;
                l++;
                
            }
            r++;
        }
        if(cnt==s.size()) return true;
        return false;
    }
};