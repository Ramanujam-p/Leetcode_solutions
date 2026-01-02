class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int s = nums.size();
        vector<int> r,a(n),b(n);
        for(int i=0;i<n;i++)
            a[i]=nums[i];
        for(int i=0;i<n;i++)
            b[i]=nums[i+n];
        for(int i=0;i<n;i++)
        {
            r.push_back(a[i]);
            r.push_back(b[i]);
        }
        return r;
    }
};