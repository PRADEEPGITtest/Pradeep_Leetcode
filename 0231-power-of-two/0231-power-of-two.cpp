class Solution {
public:
bool fn(int ind, int n){
        if( pow(2,ind) == n) return true;
        if( pow(2,ind)> n) return false;

        return fn(ind+1, n);
    }
    
    bool isPowerOfTwo(int n) {
        //cout<<pow(2,0)<<" ";
        return fn(0, n);

    }

    
};