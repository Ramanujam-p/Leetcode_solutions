class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n<3) return -1;
        return nums[1];
    }
};