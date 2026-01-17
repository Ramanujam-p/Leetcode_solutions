class Solution {
public:
    int f(vector<int>& nums,int s,int e)
    {
        int ls=0,l=0;
        for(int i=s;i<=e;i++)
        {
            int a = nums[i]+ls;
            int b = l;
            int c = max(a,b);
            ls = l;
            l = c;
        }
        return l;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        return max(f(nums,0,n-2),f(nums,1,n-1));
    }
};