class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> l;
        unordered_map<char,int> u;
        for(int i=0;i<word.size();i++)
        {
            char c=word[i];
            if(c>='a' && c<='z')
                    l[c]=i;
            else 
            {
                char lc = tolower(c);
                if(!u.count(lc))
                    u[lc]=i;
            }
        }
        int s = 0;
        for(auto &p:l)
        {
            char ch = p.first;
            if(u.count(ch)&&p.second<u[ch])
                s++;
        }
        return s;

    }
};