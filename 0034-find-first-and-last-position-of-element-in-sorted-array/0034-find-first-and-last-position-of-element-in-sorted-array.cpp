class Solution {
public:
    int f(vector<int>& nums,int target)
    {
        int n=nums.size(),l = 0 , h = n - 1 , a = -1;
        while(l<=h)
        {
            int m = l+(h-l)/2;
            if(nums[m]==target)
            {
                a = m;
                h = m-1;
            }
            else if(nums[m]<target)
                l = m+1;
            else h = m - 1;
        }
        return a;
    }
    int s(vector<int>& nums,int target)
    {
        int n=nums.size(),l = 0 , h = n - 1 , a = -1;
        while(l<=h)
        {
            int m = l+(h-l)/2;
            if(nums[m]==target)
            {
                a = m;
                l = m+1;
            }
            else if(nums[m]<target)
                l = m+1;
            else h = m - 1;
        }
        return a;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
            return{f(nums,target),s(nums,target)};
    }
};