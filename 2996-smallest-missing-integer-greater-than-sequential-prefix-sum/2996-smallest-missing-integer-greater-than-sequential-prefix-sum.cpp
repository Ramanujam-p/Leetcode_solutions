class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int> a(nums.begin(),nums.end());
        int n = nums.size();
        int s = nums[0];
        for(int i=1;i<n;i++)
        {
             if(nums[i]==nums[i-1]+1)
                 s+=nums[i];
             else break;
        }
        while(a.count(s)) s++;
        return s;
    }
};