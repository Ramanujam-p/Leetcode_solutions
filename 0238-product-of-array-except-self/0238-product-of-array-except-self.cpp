class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(n,1);
        int l=1,r=1;
        for(int i=0;i<n;i++)
        {
            a[i]*=l;
            l*=nums[i];
        }
        for(int j=n-1;j>=0;j--)
        {
            a[j]*=r;
            r*=nums[j];
        }
        return a;
    }
};