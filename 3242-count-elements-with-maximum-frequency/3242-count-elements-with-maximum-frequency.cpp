class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;
        int mf = 0;
        for(int n:nums)
            mf = max(mf,++m[n]);
        int me = 0;
        for(auto& p: m)
            if(p.second==mf)
                me+=mf;
        return me;
    }
};