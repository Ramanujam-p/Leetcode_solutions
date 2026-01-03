class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       unordered_map<int,int> a;
       for(int x:arr)
            a[x]++;
        int m = 0,e = -1;
       for(auto z:a)
       {
        if(z.second>m) 
        {
            m = z.second;
            e = z.first;
        }
       }
        return e;
    }
};