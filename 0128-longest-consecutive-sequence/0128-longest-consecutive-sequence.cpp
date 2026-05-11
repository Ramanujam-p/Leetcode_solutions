class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size(),a=1,c=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
                continue;
            if(nums[i]-nums[i-1]==1) c++;
            else
            {
                a = max(a,c);
                c=1;
            }
         }
         return max(a,c);
    }
};