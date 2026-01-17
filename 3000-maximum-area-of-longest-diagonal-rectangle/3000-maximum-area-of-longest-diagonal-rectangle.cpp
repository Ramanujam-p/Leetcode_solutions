class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double md = 0;
        int ma = 0;
        for(auto &d:dimensions)
        {
            int l = d[0];
            int b = d[1];
            double dl = sqrt(l*l + b*b);
            int a = l*b;
            if(dl>md)
            {
                md = dl;
                ma = a;
            }
            else if(dl==md)
                ma=max(a,ma);
        }
        return ma;
    }
};