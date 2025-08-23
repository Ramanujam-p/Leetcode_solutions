class Solution {
public:
    int minSteps(string s, string t) {
        int n = s.size();
        int r = 0;
        vector<int> a(26,0);
        for(int i=0;i<n;i++) a[s[i]-'a']++;
        for(int i=0;i<n;i++) a[t[i]-'a']--;
        for(int i=0;i<26;i++)
            if(a[i]>0)
                r += a[i];
        return r;
    }
};