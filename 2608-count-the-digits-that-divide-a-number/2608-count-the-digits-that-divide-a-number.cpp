class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int o=num;
        while(num!=0)
        {
            int d=num%10;
            if(o%d==0)
             count++;
             num/=10;
        }
        return count;
    }
};