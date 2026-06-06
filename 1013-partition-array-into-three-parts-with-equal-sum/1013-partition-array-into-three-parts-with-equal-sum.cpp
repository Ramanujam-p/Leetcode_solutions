class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int t=0;
        for(int x:arr) t+=x;
        if(t%3!=0) return false;
        int tar=t/3,c_s=0,c=0;
        for(int x:arr)
        {
            c_s+=x;
            if(c_s==tar)
            {
                c++;
                c_s=0;
            }
        }
        return c>=3;
    }
};