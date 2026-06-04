class Solution {
public:
    int w(int n)
    {
        string s = to_string(n);
        int l = s.size(),b=0;
        if(l<3) return 0;
        for(int i=1;i<l-1;i++)
        {
            if(s[i]>s[i-1] && s[i]>s[i+1]) b++;
            if(s[i]<s[i-1] && s[i]<s[i+1]) b++;
        }
        return b;
    }
    int totalWaviness(int num1, int num2) {
        int a = 0;
        for(int i=num1;i<=num2;i++)
            a+=w(i);
        return a;
    }
};