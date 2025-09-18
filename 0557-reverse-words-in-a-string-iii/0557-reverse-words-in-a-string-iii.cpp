class Solution {
public:
    string reverseWords(string s) {
        istringstream a(s);
        ostringstream b;
        string c;
        while(a >> c)
            {
               reverse(c.begin() , c.end());
                b << c << " ";
            }
        string r = b.str();
        if(!r.empty()) r.pop_back();
        return r;
    }
};