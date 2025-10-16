class Solution {
public:
    bool checkDivisibility(int n) {
        int t = n;
        if(t<0) t = -t;
        int s = 0;
        int p = 1;
        if(t==0)
        {
            s=0;
            p=0;
        }
        else
        {
            while(t!=0)
                {
                int d = t%10;
                s+=d;
                p*=d;
                t/=10;
                }
        }
        int a=s+p;
        if(a==0) return false;
        int m = n < 0 ? -n : n;                
        return (m % a) == 0;
    }
};