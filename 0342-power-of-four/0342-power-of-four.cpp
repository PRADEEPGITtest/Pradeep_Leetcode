class Solution {
public:
bool fn(int ind, int n){
    if( pow(4,ind) == n) return true;
    if( pow(4,ind)> n) return false;

    return fn(ind+1, n);
}
    bool isPowerOfFour(int n) {
        return fn(0, n);
    }
};