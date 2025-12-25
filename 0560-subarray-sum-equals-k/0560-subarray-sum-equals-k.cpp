class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(),c = 0,s;
        for(int i=0;i<n;i++)
        {
            s=0;
            for(int j=i;j<n;j++)
            {
                s+=nums[j];
                if(s==k)
                    c++;
            }
        }
        return c;
    }
};