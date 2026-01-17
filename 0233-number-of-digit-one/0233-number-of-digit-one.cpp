class Solution {
public:
    int countDigitOne(int n) {
        long long ans=0,f=1;
        while(f<=n)
        {
            long long l=n%f;
            long long c=(n/f)%10;
            long long h=n/(f*10);
            if(c==0)
                ans+=h*f;
            else if(c==1)
                ans+=h*f+(l+1);
            else ans+=(h+1)*f;
            f*=10;
        }
        return ans;
    }
};