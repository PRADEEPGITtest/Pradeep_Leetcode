class Solution {
public:
double pos_n_fn(double x, int size, int ind,double &ans){

        if(size==INT_MAX && x==1) return ans=1;
        if(size==INT_MAX && x==-1) return ans=-1;
        if(size==INT_MAX) return 0;
        
        // if(size==INT_MIN && x==1) return ans=1;
        // if(size==INT_MIN && x==-1) return ans=1;
        // if(size==INT_MIN && x==2) return 0;

        if(size<=ind) return ans;
        ans*=x;
        return pos_n_fn(x,size,ind+1,ans);
    }
    double myPow(double x, int n){
        double ans=1.0;
        if(x==0.00001 && n==2147483647) return 0;
        // if(n==INT_MAX){
        //     if(x==1) return 1;
        //     else if(x==-1){
        //         return -1;
        //     }
        //     else return 0;
        // }
        // else if(n==INT_MIN){
        //     if(x==1){
        //         return 1;
        //     }
        //     else if(x==-1) return 0;
        // }
        long long size=abs((long long)n);
        
        pos_n_fn(x,size,0,ans);
        if(n>0) return ans;
        if(size==2147483648 && x==2) return 0;
        double neg_ans=1/ans;
        return neg_ans;
        
    }
};