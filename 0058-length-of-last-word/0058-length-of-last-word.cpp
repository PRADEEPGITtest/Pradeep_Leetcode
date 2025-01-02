class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        //cout<<n<<" ";
        int len=0;
        if(n==1) return 1;
        if(s[n]==' ') len=0;
        
        for(int i=n-1;i>=0;i--)
        {
            

            if(s[i]==' '&& len>0)
            {
                break;  
            }
            if (s[i]!=' ')
            {
                len++;
            }
                
        }
        return len;
        
    }
};