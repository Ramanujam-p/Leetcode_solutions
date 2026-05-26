class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> u,l;
        for(char c:word)
        {
            if(c>='a'&&c<='z') l.insert(c);
            else u.insert(tolower(c));
        }
        int c=0;
        for(char b:l)
            if(u.count(b))
                c++;
        return c;
    }
};