class Solution {
public:
    int numberOfSteps(int num) {
        int s = 0;
        int t = num;
        while(t)
        {
            if(t%2==0)
            { 
                t/=2;
                s++;
            }
            else
            {
                t-=1;
                s++;
            }
        }
        return s;
    }
};