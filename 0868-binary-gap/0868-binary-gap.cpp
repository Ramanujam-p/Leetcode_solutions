class Solution {
public:
    int binaryGap(int n) {
        int a = __builtin_popcount(n);
        if(a==1) return 0;
        int i=0,p=-1,m=0;
        while(n!=0)
        {
            if(n&1)
            {
                if(p!=-1)
                    m=max(m,i-p);
                p=i;
            }
            n>>=1;
            i++;
        }
        return m;
    }
};