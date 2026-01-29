class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();
        while(k>0)
        {
            int m = nums[0],j=0;
            for(int i=1;i<n;i++)
            {
                if(nums[i]<m)
                {
                     m=nums[i];
                     j=i;
                }
            }
            nums[j]=m*multiplier;
            k--;
        }
        return nums;
    }
};