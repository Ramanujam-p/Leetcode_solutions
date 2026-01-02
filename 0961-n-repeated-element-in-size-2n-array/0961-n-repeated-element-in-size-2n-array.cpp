class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        int a = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                if(nums[i]==nums[j])
                    a=nums[j];
        }
        return a;
    }
};