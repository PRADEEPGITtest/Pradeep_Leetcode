class Solution {
public:
    string makeSmallestPalindrome(string s) {
        string str =" ";
        int l=0,r=s.size()-1;
        int ind_l=0, ind_r=s.size()-1;
        while(l<=r)
        {
            if(s[l]<s[r])
            {
                s[ind_l]=s[l];
                s[ind_r]=s[l];
            }
            else if(s[l]>s[r])
            {
                s[ind_l]=s[r];
                s[ind_r]=s[r];
            }
            else
            {
                s[ind_l]=s[l];
                s[ind_r]=s[l];

            }

            l++;
            ind_l++;

            r--;
            ind_r--;
        }
        return s;
    }
};