class Solution {
public:
    static bool comparator(int a,int b)
    {
        int x = __builtin_popcount(a),y=__builtin_popcount(b);
        if(x!=y) return x<y;
        return a<b;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),comparator);
        return arr;
    }
};