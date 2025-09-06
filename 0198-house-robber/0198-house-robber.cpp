class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> a(n,0);
        a[0] = nums[0];
        a[1] = max(nums[0],nums[1]);
        for(int i=2;i<n;i++)
            a[i] = max(a[i-1],nums[i]+a[i-2]);
         return a[n-1];
    }
};