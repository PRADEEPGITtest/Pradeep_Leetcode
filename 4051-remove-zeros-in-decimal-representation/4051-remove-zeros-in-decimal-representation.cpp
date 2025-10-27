class Solution {
public:
    long long removeZeros(long long n) {
        long long a=0;

        while(n>0){
            long long b=n%10;

            if(b!=0){
                a=(a*10)+b;
            }

            n=n/10;
        }

        long long ans=a;

        //cout<<a<<endl;
        long long fin=0;
        while(ans>0){
            long long c=ans%10;
            fin=(fin*10)+c;

            ans=ans/10;
        }

        return fin;
    }
};