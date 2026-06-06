class Solution {
public:
    int uniquePaths(int m, int n) {
        long long N = m+n-2,r = min(m-1,n-1),a=1;
        for(long long i=1;i<=r;i++)
            a=a*(N-r+i)/i;
        return (int) a;
    }
};