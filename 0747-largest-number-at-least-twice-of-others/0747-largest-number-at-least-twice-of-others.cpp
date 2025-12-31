class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int f = -1 , s = -1 , idx = 0 , i , n = nums.size();
        for(i=0;i<n;i++)
        {
            if(nums[i]>f)
            {
                s = f;
                f = nums[i];
                idx = i;
            }
            else if(nums[i]>s)
                s = nums[i];
        }
        return (f>=2*s)?idx:-1;
    }
};