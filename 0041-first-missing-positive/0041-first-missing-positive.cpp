class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
            if(nums[i]>0)
                m[nums[i]]++;
        for(int i=1;i<=n+1;i++)
            if(m.find(i)==m.end())
                return i;
        return 1;
    }
};