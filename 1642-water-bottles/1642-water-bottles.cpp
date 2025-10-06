class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=numBottles;

        while(numBottles >=numExchange){
            
            int a=numBottles % numExchange;
            numBottles/=numExchange;

            sum+=numBottles;

            numBottles+=a;
        }

        return sum;
    }
};