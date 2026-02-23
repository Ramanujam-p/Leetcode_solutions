class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        if(k>n) return false;
         unordered_set<string> r;
         for(int i=0;i<=n-k;i++)
            r.insert(s.substr(i,k));
         return r.size()== (int) pow(2,k);
    }
};