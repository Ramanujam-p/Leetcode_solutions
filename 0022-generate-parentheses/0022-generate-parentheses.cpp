class Solution {
public:
    vector<string> r;
    void gen(string s,int o,int c,int n)
    {
        if(s.length()==2*n)
        {
            r.push_back(s);
            return;
        }
        if(o<n)
            gen(s+"(",o+1,c,n);
        if(c<o)
            gen(s+")",o,c+1,n);
    }
    vector<string> generateParenthesis(int n) {
        gen("",0,0,n);
        return r;

    }
};