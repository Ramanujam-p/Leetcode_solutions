class Solution {
public:
    int r(int n)
    {
        int t=n,r=0;
        while(t!=0)
        {
            int d = t%10;
            r=(r*10)+d;
            t/=10;
        }
        return r;
    }
    bool isSameAfterReversals(int num) {
         return r(r(num)) == num;
    }
};