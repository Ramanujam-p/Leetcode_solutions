class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> b(n);
        for(int i=0;i<n;i++)
        {
            int c = 0;
            for(int j=n-1;j>=0 && grid[i][j]==0;j--)
                c++;
            b[i]=c;
        }
        int s=0;
        for(int i=0;i<n;i++)
        {
            int z = n-i-1;
            int j=i;
            while(j<n && b[j]<z) j++;
            if(j==n) return -1;
            while(j>i)
            {
                swap(b[j],b[j-1]);
                j--;
                s++;
            }
        }
        return s;
    }
};