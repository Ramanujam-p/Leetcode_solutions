class Solution {
public:
    int gcd(int a,int b)
    {
        if(b==0) return a;
        return gcd(b,a%b);
    }
    int gcdOfOddEvenSums(int n) {
        int e = n*(n+1);
        int o = n*n;
        int a = gcd(e,o);
        return a;
    }
};