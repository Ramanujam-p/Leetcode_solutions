class Solution {
public:
    bool check(int n)
    {
        if(n<=1) return false;
        for(int i=2;i<=sqrt(n);i++)
            if(n%i==0)
                return false;
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
         unordered_map<int,int> m;
         for(int x:nums)
            m[x]++;
         for(auto p:m)
            if(check(p.second))
                return true;
         return false;
    }
};