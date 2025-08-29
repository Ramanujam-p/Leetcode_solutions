class Solution {
public:
    int mySqrt(int x) {
        int l=0,h=x,a=0;
        while(l<=h)
            {
                 long long m=l+(h-l)/2;
                long long s=m*m;
                if(s==x)
                    return m;
                else if(s<x)
                {
                    a=m;
                    l=m+1;
                }
                else
                    h=m-1;
                    
                    
            }
        return a;
    }
};