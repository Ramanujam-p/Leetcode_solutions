class Solution {
public:
    int rev(int n)
    {
        int t = n;
        int r = 0;
        while(t!=0)
        {
            int d = t%10;
            r=(r*10)+d;
            t/=10;
        }
        return r;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int s = 0 , n=nums.size();
        vector<int> b;
        for(int i=0;i<n;i++)
            b.push_back(nums[i]);
        unordered_set<int> a;
        for(int i=0;i<n;i++)
        {
            int y = nums[i];
            int z = rev(y);
            b.push_back(z);
        }
        for(int x:b)
            a.insert(x);
        return a.size();
    }
};