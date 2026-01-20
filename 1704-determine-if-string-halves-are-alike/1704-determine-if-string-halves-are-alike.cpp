class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size()/2,c = 0;
        unordered_set<char> a = {'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0;i<n;i++)
        {
            char x = s[i];
            char y = s[n+i];
            if(a.count(x)) c++;
            if(a.count(y)) c--;
        }
        return c==0;
    }
};