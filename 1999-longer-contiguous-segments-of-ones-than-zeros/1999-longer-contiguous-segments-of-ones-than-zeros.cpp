class Solution {
public:
    bool checkZeroOnes(string s) {
        int cnt=0;
        int maxi=0;

        int cnt1=0;
        int maxi1=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                cnt1=0;
                // maxi1=0;
                cnt++;
                maxi=max(maxi,cnt);
                
            }
            else
            {
                cnt=0;
                // maxi=0;
                cnt1++;
                maxi1=max(maxi1,cnt1);
            }
        }

        if(maxi<=maxi1)
            return false;
        else 
            return true;
    }
};