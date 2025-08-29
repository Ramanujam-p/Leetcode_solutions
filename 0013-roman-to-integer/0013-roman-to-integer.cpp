class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> v={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int t=0;
        for(int i=0;i<s.size();i++)
        {
            int c=v[s[i]];
            int n=(i+1<s.size())?v[s[i+1]]:0;
            if(c>=n) t+=c;
            else  t-=c;
        }
        return t;
    }
};