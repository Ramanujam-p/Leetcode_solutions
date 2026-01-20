class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size(),a=0,b=0,c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R') a++;
            if(s[i]=='L') b++;
            if(a==b)      c++;
        }
        return c;
    }
};