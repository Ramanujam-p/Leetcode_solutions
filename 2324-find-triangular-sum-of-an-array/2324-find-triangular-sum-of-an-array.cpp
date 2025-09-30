class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int x = nums.size();
        if(x==1) return nums[0];
        for (int i = x - 1; i > 0; i--) 
            for (int j = 0; j < i; j++) 
                nums[j] = (nums[j] + nums[j + 1]) % 10;
        return nums[0];
    }
};