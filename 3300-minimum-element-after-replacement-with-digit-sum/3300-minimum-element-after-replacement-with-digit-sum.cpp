class Solution {
public:
    int s=0;
    int digits_sum(int n)
    {
        s=0;
        while(n>0)
        {
            int d = n%10;
            s+=d;
            n/=10;
        }
        return s;
    }
    int minimum_element(vector<int> &a)
    {
        int m = a[0];
        for(int i=0;i<a.size();i++)
            if(m>a[i])
                m=a[i];
        return m;
    }
    int minElement(vector<int>& nums) {
        vector<int> a;
        for(int i=0;i<nums.size();i++)
            a.push_back(digits_sum(nums[i]));
        return minimum_element(a);
    }
};