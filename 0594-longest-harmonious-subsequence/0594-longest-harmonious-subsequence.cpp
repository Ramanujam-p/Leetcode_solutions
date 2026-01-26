class Solution {
public:
    int findLHS(vector<int>& nums) {
        int a = 0;
        unordered_map<int,int> m;
        for(int x:nums)
            m[x]++;
        for(auto const& [k,v]:m)
            if(m.count(k+1))
                a=max(a,m[k+1]+v);
        return a;
    }
};