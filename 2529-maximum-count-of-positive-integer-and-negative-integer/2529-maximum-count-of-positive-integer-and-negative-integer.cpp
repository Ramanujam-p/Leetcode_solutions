class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int m=0,pc=0,nc=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0) nc++;
            else if(nums[i]==0) continue;
            else pc++;
        }
        return max(pc,nc);
    }
};