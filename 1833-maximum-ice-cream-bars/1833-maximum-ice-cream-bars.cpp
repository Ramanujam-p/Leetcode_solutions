class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = *max_element(costs.begin(),costs.end());
        vector<int> a(n+1,0);
        for(int x:costs)
            a[x]++;
        int c=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i]==0) continue;
            int b=min(a[i],coins/i);
            c+=b;
            coins-=b*i;
            if(coins<i) break;
        }
        return c;
    }
};