class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
        {
            return false;
        }
        long long revnum=0;
        long long dup=x;
        while(x>0)
        {
            revnum=(revnum*10)+(x%10);
            x=x/10;
        }
        if (dup==revnum)
        {
            return true;
        }
        else
        {
            return false;
        }
      }
};