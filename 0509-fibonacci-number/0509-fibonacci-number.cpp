class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        else if(n==1||n==2) return 1;
        vector<int>a(n+1,0);
        a[0]=0;
        a[1]=a[2]=1;
        for(int i=3;i<=n;i++)
            a[i]=a[i-1]+a[i-2];
        return a[n];
    }
};