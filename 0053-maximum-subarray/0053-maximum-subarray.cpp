class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        int m = INT_MIN;
        for(int i = 0 ; i < n ; i++)
        {
            c += nums[i];
            m = max(m,c);
            if(c<0) c = 0;
        }
        return m;
    }
};