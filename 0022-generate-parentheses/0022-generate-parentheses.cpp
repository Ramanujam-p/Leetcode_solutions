class Solution {
public:
    vector<string> r;
    bool val(string s)
    {
        int a = 0;
        for(char c:s)
        {
            if(c=='(') a++;
            else a--;
            if(a<0) return false;
        }
        return a==0;
    }
    void gen(string s,int n)
    {
        if(s.length()==2*n)
        {
            if(val(s))
                r.push_back(s);
            return;
        }
        gen(s+"(",n);
        gen(s+")",n);
    }
    vector<string> generateParenthesis(int n) {
        gen("",n);
        return r;
    }
};