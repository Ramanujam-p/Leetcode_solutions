class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        unordered_set<int> s;
        for(int x:nums)
            s.insert(x);
        vector<int> v(s.begin(),s.end());
        sort(v.rbegin(),v.rend());
        vector<int> a;
        int l = min(k,(int)v.size());
        for(int i=0;i<l;i++)
            a.push_back(v[i]);
        return a;
    }
};