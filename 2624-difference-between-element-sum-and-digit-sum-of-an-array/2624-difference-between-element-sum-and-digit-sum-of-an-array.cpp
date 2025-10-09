class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int es = 0;
        int ds=0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            es+=nums[i];
            int t = nums[i];
            while(t!=0)
            {
              int d = t%10;
              ds+=d;
              t/=10;
             }
        }
        return es-ds;
    }
};