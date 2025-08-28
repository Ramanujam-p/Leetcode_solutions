class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l = 1 , h = num;
        while(l<=h)
        {
            long long m = l + (h-l)/2;
            long long ms = m*m;
            if(ms == num)
                return true;
            else if(ms < num)
                l = m + 1;
            else 
                h = m - 1;
        }
        return false;
    }
};