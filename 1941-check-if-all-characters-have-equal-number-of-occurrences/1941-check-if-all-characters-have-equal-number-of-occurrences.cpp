class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>m;
        for(char c:s)
            m[c]++;
        int c = -1;
        for(auto &p:m)
        {
            if(c==-1) 
                c = p.second;
            else if(p.second!=c)
                return false;
        }
        return true;
    }
};