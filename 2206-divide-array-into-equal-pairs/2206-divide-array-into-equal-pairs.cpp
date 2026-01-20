class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size(),pair=n/2,s=0;
        unordered_map<int,int> m;
        for(int x:nums)
            m[x]++;
        for(auto p:m)
        {
            if(p.second==2)
                s++;
            else if(p.second>2)
                s+=p.second/2;
        }
            
        return s==pair;
    }
};