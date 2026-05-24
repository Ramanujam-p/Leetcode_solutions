class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if(n==1) return 0;
        unordered_map<int,vector<int>> m;
        for(int i=0;i<n;i++) m[arr[i]].push_back(i);
        queue<int> q;
        vector<bool> v(n,false);
        int s=0;
        q.push(0);
        v[0]=true;
        while(!q.empty())
        {
            int z=q.size();
            while(z--)
            {
                int a = q.front();
                q.pop();
                if(a==n-1) return s;
                vector<int> y = m[arr[a]];
                y.push_back(a+1);
                y.push_back(a-1);
                for(int x:y)
                {
                    if(x>=0 &&x<n && !v[x])
                    {
                        v[x]=true;
                        q.push(x);
                    }
                }
                m[arr[a]].clear();
            }
            s++;
        }
        return -1;
    }
};