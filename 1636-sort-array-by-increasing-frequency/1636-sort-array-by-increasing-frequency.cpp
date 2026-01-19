class Solution {
public:
    static unordered_map<int,int> m;
    static bool g(int a,int b)
    {
        if(m[a]!=m[b])
            return m[a]<m[b];
        return a>b;
    }
    vector<int> frequencySort(vector<int>& nums) {
        m.clear();
        for(int x:nums)
            m[x]++;
        sort(nums.begin(),nums.end(),g);
    return nums;
    }
};
unordered_map<int, int> Solution::m;