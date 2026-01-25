class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size(),s=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i+=2)
            s+= min(nums[i],nums[i-1]);
        return s;
    }
};