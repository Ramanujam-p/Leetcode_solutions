class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        if(n==1) return nums;
        unordered_map<int,int> m;
        for(int x:nums)
            m[x]++;
        for(auto a:m)
            if(a.second>n/3)
                ans.push_back(a.first);
        return ans;
    }
};