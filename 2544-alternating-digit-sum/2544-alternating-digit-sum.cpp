class Solution {
public:
    int alternateDigitSum(int n) {
        int s = 0;
        stack<int> a;
        while(n!=0)
        {
            int d = n%10;
            a.push(d);
            n/=10;
        }
        int j = 1;
        while(!a.empty())
        {
            int i = a.top();
            a.pop();
            s += j*i;
            j *= -1; 
        }
        return s;
    }
};