class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size(),s=0;
        int m = INT_MIN;
        int dp[n];
        for(int i=n-1;i>=0;i--)
            {
                if(i+k<n)
                {dp[i]=energy[i]+ dp[i+k];}
                else
                {
                    dp[i] = energy[i];
                }
                m=max(m,dp[i]);
            }
            return m;
    }
};