class Solution {
public:
    static const int modulo= 1e9+7;
    vector<vector<int>>states,compatible;
    void g(int n,vector<int>& c)
    {
        if(c.size()==n)
        {
            states.push_back(c);
            return;
        }
        for(int color=0;color<3;color++)
        {
            if(c.empty()||c.back()!=color)
            {
                c.push_back(color);
                g(n,c);
                c.pop_back();
            }
        }
    }
    bool check(const vector<int>& a,const vector<int>& b)
    {
        for(int i=0;i<a.size();i++)
            if(a[i]==b[i]) return false;
        return true;
    }
    int colorTheGrid(int m, int n) {
        if(n>m) swap(n,m);
        vector<int> c;
        g(n,c);
        int s = states.size();
        compatible.resize(s);
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<s;j++)
                if(check(states[i],states[j]))
                    compatible[i].push_back(j);
        }
        vector<long long>dp(s,1),ndp(s,0);
        for(int r=1;r<m;r++)
        {
            fill(ndp.begin(),ndp.end(),0);
            for(int i=0;i<s;i++)
            {
                for(int j:compatible[i])
                {
                    ndp[j]=(ndp[j]+dp[i])%modulo;
                }
            }
            dp=ndp;
        }
        long long z=0;
        for(long long y:dp)
            z=(z+y)%modulo;
        return z;
    }
};