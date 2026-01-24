class Solution {
public:
    string thousandSeparator(int n) {
        string a = to_string(n);
        if(a.size()<=3) return a;
        for(int i=a.size();i>=1;i-=3)
        {
            if(i==a.size()) continue;
            else a.insert(i,".");
        }
        return a;
    }
};