class Solution {
public:
    int concatenatedBinary(int n) {
        long long r = 0;
        int b=0;
        const int m = 1e9+7;
        for(int i=1;i<=n;i++)
        {
            if((i & (i-1))==0)
                b++;
            r = ((r<<b)+i)%m;
        }
        return r;
    }
};