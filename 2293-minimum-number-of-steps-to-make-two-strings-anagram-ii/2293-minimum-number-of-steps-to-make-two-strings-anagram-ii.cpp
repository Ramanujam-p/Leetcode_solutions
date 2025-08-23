class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> m;
        int n = s.size();
        for(int i=0;i<n;i++)
            m[s[i]]++;
         n = t.size();
        for(int i=0;i<n;i++)
            m[t[i]]--;
            int c=0;
            for(auto z:m)
                c+=abs(z.second);
            return c;
    }
};