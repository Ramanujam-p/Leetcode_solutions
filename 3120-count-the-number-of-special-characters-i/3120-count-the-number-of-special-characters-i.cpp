class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> l,u;
        for(char c:word)
        {
            if(c>='a' && c<='z')
                l.insert(c);
            else u.insert(tolower(c));
        }
        int c = 0;
        for(char y:l)
            if(u.count(y))
                c++;
        return c;
    }
};