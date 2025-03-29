class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        // int deck=n*n;
        // int mul=deck*w;
        // int m=deck;
        // while(m--)
        // {
        //     if(deck*w<=maxWeight)
        //     {
        //         return deck;
        //     }
        //     deck--;
        // }
        // return 0;

        if((n*n*w)<= maxWeight) return n*n;
        return maxWeight/w;
    }
};