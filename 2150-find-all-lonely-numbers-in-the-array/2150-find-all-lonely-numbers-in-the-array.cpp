class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> b;
        unordered_map<int,int> m;
        for(int x:nums)
            m[x]++;
        for(auto p:m)
        {
            int x = p.first;
            if(p.second==1 &&m.count(x-1)==0&&m.count(x+1)==0)
                b.push_back(x);
        }
        return b;
    }
};