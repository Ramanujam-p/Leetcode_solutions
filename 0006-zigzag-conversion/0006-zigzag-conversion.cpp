class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 ||numRows>=s.size())
            return s;
        vector<string> a(numRows);
        int r=0,d=-1;
        for(char c:s)
        {
            a[r]+=c;
            if(r==0 || r==numRows-1)
                d=-d;
            r+=d;
        }
        string ans;
        for(string ch:a)
            ans+=ch;
        return ans;
    }
};