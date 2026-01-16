class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> a;
        for(char b:s)
        {
            if(a.count(b))
                return b;
            a.insert(b);
        }
        return ' ';
    }
};