class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if(deck.size()<2) return false;
        unordered_map<int,int> m;
        for(auto &x:deck)
            m[x]++;
        int a = 0;
        for(auto &p:m)
            a = gcd(a,p.second);
        return a>=2;
    }
};