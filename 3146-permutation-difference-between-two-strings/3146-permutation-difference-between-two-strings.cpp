class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int> m;
        int c = 0;
        int n = s.size();
        for(int i=0;i<n;i++)
            m[s[i]]=i;
        for(int i=0;i<n;i++)
            c += abs(i - m[t[i]]);
        return c;

    }
};