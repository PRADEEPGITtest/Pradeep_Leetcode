class Solution {
public:
bool fn(int ind, int n){
    if( pow(3,ind) == n) return true;
    if( pow(3,ind)> n) return false;

    return fn(ind+1, n);
}
    bool isPowerOfThree(int n) {
        return fn(0, n);
    }
};