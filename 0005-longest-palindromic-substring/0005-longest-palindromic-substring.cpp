class Solution {
public:
    string longestPalindrome(string s) {
        int st=0,m=1,n=s.size();
        if(n<2) return s;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(f(s,i,j))
                {
                 int l = j-i+1;
                 if(l>m)
                 {
                    st=i;
                    m=l;
                  }
                }
            }
        }
        return s.substr(st,m);
    }
    bool f(string &s,int l,int r)
    {
        while(l<r)
        {
            if(s[l]!=s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
};