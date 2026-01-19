class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int a:nums)
            m[a]++;
        int x = 0,y=0;
        for(auto p:m)
        {
            x+=p.second/2;
            y+=p.second%2;
        }
        return {x,y};
    }
};