class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> r = {1};
        while(r.size()<n)
        {
            vector<int> t;
            for(int x:r) 
                if(2*x-1<=n)
                    t.push_back(2*x-1);
            for(int x:r)
                if(2*x<=n)
                    t.push_back(2*x);
            r=t;
        }
        return r;
    }
};