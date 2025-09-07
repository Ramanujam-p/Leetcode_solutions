class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> r;
        if(n==1)
        { 
            r.push_back(0);
            return r;
        }
        int a = n/2;
        for(int i=1;i<=a;i++)
        {
            r.push_back(i);
            r.push_back(-i);
        }
        if(n%2!=0) r.push_back(0);
        return r;
    }
};