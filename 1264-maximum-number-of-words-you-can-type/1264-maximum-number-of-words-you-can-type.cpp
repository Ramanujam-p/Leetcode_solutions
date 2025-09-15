class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> b;
        for(char c:brokenLetters)
            b.insert(c);
        stringstream a(text);
        string s1;
        int d = 0;
        bool e = false;
        while(a>>s1)
        {
          e = false;
          for(char c : s1)
          {
            if(b.find(c)!=b.end())
            {
                e = true;
                break;
            }
          }
           if(!e) d++;
        }
        return d;
    }
};