class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<bool> a(r,false);
        vector<bool> b(c,false);
        for(int i = 0 ; i < r ; i++)
            for(int j = 0 ; j < c ; j++)
                if(matrix[i][j]==0)
                {
                    a[i] = true;
                    b[j] = true;
                }
        for(int i = 0 ; i < r ; i++)
            for(int j = 0 ; j < c ; j++)
                if(a[i]||b[j])
                    matrix[i][j]=0;
    }
};