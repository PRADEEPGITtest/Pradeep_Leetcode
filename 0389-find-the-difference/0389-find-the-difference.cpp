class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        char ans;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(t[i]!=s[i])
                return t[i];
        }
        return t[n];
    }
};