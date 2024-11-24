class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10)
        {
            return false;
        }
        int alice=10;
        while(1)
        {
            
            n=n-alice;
            cout<< n<<" ";
            if(n<0) return false;
            int bob=(alice-1);

            if(n>=bob)
            {
                n=n-bob;
                //cout<< n;
                if(n==0) return false;
                alice-=2;
            }
            
            else 
            {
                return true;
            }
        }
        return false;
    }
};