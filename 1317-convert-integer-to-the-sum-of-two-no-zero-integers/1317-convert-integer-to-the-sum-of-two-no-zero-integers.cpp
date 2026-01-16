class Solution {
public:
    bool check(int n)
    {
        while(n!=0)
        {
            int d = n%10;
            if(d==0) return false;
            n/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans;
        for(int i=1;i<n;i++)
        {
            int a = i;
            int b = n-i;
            if(check(a)&&check(b))
            {
                ans.push_back(a);
                ans.push_back(b);
                return ans;
            }
        }
        return ans;
    }
};