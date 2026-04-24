class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int c = 0 , m = INT_MIN;
        for(int x:nums)
        {
            c+=x;
            m = max(c,m);
            if(c<0) c=0;
        }
        return m;
    }
};