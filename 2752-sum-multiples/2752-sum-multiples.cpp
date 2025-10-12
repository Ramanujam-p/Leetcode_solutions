class Solution {
public:
    int sumOfMultiples(int n) {
        int s = 0;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0) s+=i;
            else if(i%5==0) s+=i;
            else if(i%7==0) s+=i;
        }
        return s;
    }
};