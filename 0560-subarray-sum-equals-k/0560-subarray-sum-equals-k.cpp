class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int s = 0 , c = 0;
        m[0]=1;
        for(int a:nums)
        {
            s+=a;
            if(m.find(s-k)!=m.end())
                c+=m[s-k];
            m[s]++;
        }
        return c;
    }
};