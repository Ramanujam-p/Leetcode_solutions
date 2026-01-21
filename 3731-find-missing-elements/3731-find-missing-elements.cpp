class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> a;
        unordered_set<int> m;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int last = nums[n-1],first=nums[0];
        for(int x:nums)
           m.insert(x);
        for(int i=first;i<=last;i++)
            if(!m.count(i))
                a.push_back(i);
        return a;
    }
};