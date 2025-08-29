class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int>f;
        int c=0;
        for(int n:nums)
        {
            c+=f[n+k];
            c+=f[n-k];
            f[n]++;
        }
        return c;
    }
};