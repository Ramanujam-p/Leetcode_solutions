class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
         int n=matrix.size();
         bool check=true;
         for(int i=0;i<n;i++)
         {
            vector<bool>a(n+1,false);
            for(int j=0;j<n;j++)
            {
                int v = matrix[i][j];
                if(v<1 || v>n || a[v])
                    return false;
                a[v]=true;
            }
         }
         for(int j=0;j<n;j++)
         {
            vector<bool>a(n+1,false);
            for(int i=0;i<n;i++)
            {
                int v = matrix[i][j];
                if(v<1 || v>n || a[v])
                    return false;
                a[v]=true;
            }
         }
         return true;
    }
};