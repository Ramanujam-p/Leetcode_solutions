class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int mi = nums[0];
        int ma = nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]>ma)
                ma = nums[i];
            if(nums[i]<mi)
                mi = nums[i];
        }
        while(mi!=0)
        {
            int t = mi;
            mi = ma%mi;
            ma = t;
        }
        return ma;
    }
};