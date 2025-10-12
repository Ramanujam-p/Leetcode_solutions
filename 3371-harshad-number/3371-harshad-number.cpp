class Solution {
public:
    int sod(int x)
    {
        int s = 0;
        while(x!=0)
        {
        int d = x%10;
        s+=d;
        x/=10;
        }
        return s;
    }
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int a = sod(x);
        if(x%a==0) return a;
        return -1;
    }
};