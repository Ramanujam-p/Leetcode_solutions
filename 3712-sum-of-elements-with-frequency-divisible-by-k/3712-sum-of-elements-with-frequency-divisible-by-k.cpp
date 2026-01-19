class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int x:nums)
            m[x]++;
        int s = 0;
        for(auto p:m)
        {
            int a = p.second;
            int b = p.first;
            if(a%k==0)
            {
                int d = a*b;
                s+=d;
            }
        }
        return s;
    }
};