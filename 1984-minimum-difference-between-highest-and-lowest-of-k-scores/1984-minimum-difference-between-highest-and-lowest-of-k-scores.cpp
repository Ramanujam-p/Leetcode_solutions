class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size(),a=INT_MAX;
        if(k==1) return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i+k-1<n;i++)
            a=min(a,nums[i+k-1]-nums[i]);
        return a;
    }
};