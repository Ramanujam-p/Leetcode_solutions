class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n = nums.size();
        vector<bool> a(n);
        int num = 0;
        for(int i=0;i<nums.size();i++)
        {
            num = (num * 2 + nums[i]) % 5;
            a[i] = (num==0); 
        }
        return a;
    }
};