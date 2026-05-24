class Solution {
public:
    int dfs(int i,vector<int> &arr,int d,vector<int> &dp)
    {
        if(dp[i]!=-1) return dp[i];
        int b = 1;
        for(int j=i+1;j<=min(i+d,(int)arr.size()-1);j++)
        {
            if(arr[j]>=arr[i]) break;
            b=max(b,1+dfs(j,arr,d,dp));
        }
        for(int j=i-1;j>=max(i-d,0);j--)
        {
            if(arr[j]>=arr[i]) break;
            b=max(b,1+dfs(j,arr,d,dp));
        }
        return dp[i]=b;
    }
    int maxJumps(vector<int>& arr, int d) {
        int n = arr.size();
        vector<int> dp(n,-1);
        int a = 1;
        for(int i=0;i<n;i++)
            a=max(a,dfs(i,arr,d,dp));
        return a;
    }
};