class Solution {
public:
    int s=0;
    int digit_sum(int n)
    {
        s=0;
        while(n!=0)
        {
            int d = n%10;
            s+=d;
            n/=10;
        }
        return s;
    }
    int minElement(vector<int>& nums) {
        vector<int> a;
        int n = nums.size();
        for(int i=0;i<n;i++)
            a.push_back(digit_sum(nums[i]));   
        sort(a.begin(),a.end());
        return a[0];
    }
};