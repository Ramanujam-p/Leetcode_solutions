class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n=0,m=INT_MAX;
        long long s=0;
        for(auto &a:matrix)
        {
            for(int v:a)
            {
                s+=abs(v);
                if(v<0) n++;
                m = min(m,abs(v));
            }
        }
        if(n%2!=0) s-=2LL*m;
        return s;
    }
};