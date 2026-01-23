class Solution {
public:
    int secondHighest(string s) {
        int n = s.size();
        vector<int> a;
        unordered_set<int> b={0,1,2,3,4,5,6,7,8,9};
        for(int i=0;i<n;i++)
            if(b.count(s[i]-'0') && isdigit(s[i]))
                a.push_back(s[i]-'0');
        sort(a.begin(),a.end());
        a.erase(unique(a.begin(),a.end()),a.end());
        if(a.size()<2) return -1;
        return a[a.size()-2];
    }
};