class Solution {
public:
    int arrangeCoins(int n) {
        long long c=1+8ll*n;
        long long s=(long long)sqrt(c);
        int k=(int)((-1 + s)/2);
        return k;
    }
};