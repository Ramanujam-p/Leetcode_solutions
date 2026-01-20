class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map <int,int> m;
        while(n!=0)
        {
            int d =  n%10;
            m[d]++;
            n/=10;
        }
        int mf = INT_MAX;
        for(auto p:m)
            mf=min(mf,p.second);
        int ans = INT_MAX;
        for(auto p:m)
            if(p.second==mf)
                ans=min(ans,p.first);
        return ans;
    }
};