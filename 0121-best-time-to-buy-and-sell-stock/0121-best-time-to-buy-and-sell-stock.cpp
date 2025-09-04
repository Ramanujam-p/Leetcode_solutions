class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0 , n = prices.size() , m = prices[0];
        for(int i = 1 ; i < n; i++ )
        {
            int p1 = prices[i] - m;
            p = max(p , p1);
            m = min(m , prices[i]);
        }
        return p;
    }
};