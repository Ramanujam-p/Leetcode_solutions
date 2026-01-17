class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size(),s=0;
        if(k==0)
        {
            for(int i=1;i<n;i++)
                if(nums[i]==0 &&nums[i-1]==0)
                    return true;
            return false;
        }
        unordered_map<int,int> a;
        a[0]=-1;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
            int r = s%k;
            if(a.count(r))
            {
                if(i-a[r]>=2)
                    return true;
            }   
            else
                a[r]=i;
        }
        return false;
    }
};