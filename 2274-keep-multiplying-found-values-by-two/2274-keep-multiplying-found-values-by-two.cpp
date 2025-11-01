class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> a;
        int n = nums.size();
        for(int i=0;i<n;i++)
            a.insert(nums[i]);
        while(a.find(original)!=a.end())
            original*=2;
        return original;
    }
};