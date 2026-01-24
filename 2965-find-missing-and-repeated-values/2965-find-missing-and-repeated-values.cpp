class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size(),a=0,b=0;
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=1;i<=n*n;i++)
            m[i]=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                m[grid[i][j]]++;
        for(auto p:m)
        {
            if(p.second==2)
                a=p.first;
            if(p.second==0)
                b=p.first;
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};