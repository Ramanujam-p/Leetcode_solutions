class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> m;
        for(int x:nums)
            m[x]++;
        vector<pair<int,int>> v;
        for(auto p:m)
            v.push_back({p.second,p.first});
        sort(v.begin(),v.end(),greater<>());
        vector<int> a;
        for(int i=0;i<k;i++)
            a.push_back(v[i].second);
        return a;
    }
};