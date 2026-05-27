class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> u;
        unordered_map<char,int> l;
        int s=0;
        for(int i=0;i<word.size();i++)
        {
            char c = word[i];
            if(c>='a' && c<='z')
                l[c]=i;
            else{
                char ch = tolower(c);
                if(!u.count(ch))
                    u[ch]=i;
            }
        }
        for(const auto &a:l)
        {
            char b = a.first;
            if(u.count(b) &&a.second<u[b])
                s++;
        }
        return s;
    }
};