class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size(),m=-1;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]<nums[j])
                {
                    m = max(m,nums[j]-nums[i]);
                }
            }
        }
        return m;
    }
};