class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int>a;
        for(int x:nums)
            if(x<0)
                a.push_back(abs(x));
        if(a.empty()) return -1;
        sort(a.begin(),a.end());
        for(int i=a.size()-1;i>=0;i--)
        {
            int k = a[i];
            for(int x:nums)
                if(k==x)
                    return k;
        }
        return -1;
    }
};