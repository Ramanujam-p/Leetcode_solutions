class Solution {
public:
    int arraySign(vector<int>& nums) {
        int s = 1;
        for(int a:nums)
        {
            if(a==0) return 0;
            if(a<0) s*=-1;
        }
        return s;
    }
};