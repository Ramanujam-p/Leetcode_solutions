class Solution {
public:
    int maxProduct(int n) {
        vector<int> a;
        while(n!=0)
        {
            int d = n%10;
            a.push_back(d);
            n/=10;
        }
        sort(a.rbegin(),a.rend());
        return a[0]*a[1];
    }
};