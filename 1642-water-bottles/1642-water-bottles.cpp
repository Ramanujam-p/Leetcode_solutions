class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int d = 0;
        int e = 0;
        while(numBottles>0)
        {
            d+=numBottles;
            e+=numBottles;
            int  n = e/numExchange;
            numBottles = n;
            e-=n*numExchange;
        }
        return d;
    }
};