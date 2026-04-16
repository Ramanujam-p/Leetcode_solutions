class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int a = nums.size();
        unordered_map <int,vector<int>> m;
        vector<int> rs;
        for(int i=0;i<a;i++) m[nums[i]].push_back(i);
        for(int q:queries)
        {
            int val = nums[q];
            auto &v = m[val];
            if(v.size()==1)
            {
                rs.push_back(-1);
                continue;
            }
            int z = lower_bound(v.begin(),v.end(),q)-v.begin();
            int l = v[(z-1+v.size())%v.size()];
            int r = v[(z+1)%v.size()];
            int d1 = abs(q-l);
            int d2 = abs(q-r);
            d1 = min(d1,a-d1);
            d2 = min(d2,a-d2);
            rs.push_back(min(d1,d2));
        }
        return rs;
    }
};