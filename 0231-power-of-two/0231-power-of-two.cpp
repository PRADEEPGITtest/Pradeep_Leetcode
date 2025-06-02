class Solution {
public:
    
    bool isPowerOfTwo(int n) {
        //cout<<pow(2,0)<<" ";
        return fn(0, n);
    }

    bool fn(int ind, int n){
        if( pow(2,ind) == n) return true;
        if( pow(2,ind)> n) return false;

        return fn(ind+1, n);
    }
};