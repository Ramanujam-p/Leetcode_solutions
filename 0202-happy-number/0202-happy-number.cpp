class Solution {
public:
    int sos(int n)
    {
        int sum=0;
        while(n!=0)
        {
         int d=n%10;
         sum+=d*d;
         n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n,fast=n;
        do{
            slow=sos(slow);
            fast=sos(sos(fast));
        }while(slow!=fast);
        return slow==1;
    }
};