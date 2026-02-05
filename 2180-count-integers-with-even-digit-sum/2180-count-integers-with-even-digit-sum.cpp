class Solution {
public:
    int ds(int n)
    {
        int s = 0;
        while(n!=0)
        {
            int d=n%10;
            s+=d;
            n/=10;
        }
        return s;
    }
    int countEven(int num) {
        int c=0;
        for(int i=1;i<=num;i++)
            if(ds(i)%2==0)
                c++;
        return c;
    }
};