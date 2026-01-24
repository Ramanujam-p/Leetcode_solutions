class Solution {
public:
    string greatestLetter(string s) {
        string a = "";
        unordered_set<char> l,u;
        for(char c:s)
        {
            if(c>='A' && c<='Z')
                u.insert(c);
            else l.insert(c);
        }
        char ans = 0;
        for(char c:u)
            if(l.count(tolower(c)))
                ans = max(ans,c);
        if(ans!=0)
            a+=ans;
        return a;
    }
};