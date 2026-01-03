class Solution {
public:
    static const int m = 1e9+7;
    int numOfWays(int n) {
        long long a = 6;
        long long b = 6;
        for(int i=2;i<=n;i++)
        {
            long long c = (a*3 + b*2)%m;
            long long d = (a*2 + b*2)%m;
            a = c;
            b = d;
        }
        return (a+b)%m;
    }
};