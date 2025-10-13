class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size(),s=0;
        for(int i=0;i<n;i++)
            s+=nums[i];
        return s%k;
    }
};