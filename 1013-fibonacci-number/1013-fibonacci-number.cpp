int fn(int n)
{
    if(n<=1) return n;

    return fn(n-1)+fn(n-2);
}
class Solution {
public:
    int fib(int n) {
        return fn(n); 
    }
};