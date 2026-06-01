class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size() , c = matrix[0].size();
        bool a = false , b = false;
        for(int i=0;i<c;i++)
            if(matrix[0][i]==0)
            {
                a=true;
                break;
            }
        for(int j=0;j<r;j++)
            if(matrix[j][0]==0)
            {
                b=true;
                break;
            }
        for(int i=1;i<r;i++)
            for(int j=1;j<c;j++)
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
        for(int i=1;i<r;i++)
            for(int j=1;j<c;j++)
                if(matrix[i][0]==0 ||matrix[0][j]==0)
                    matrix[i][j]=0;
        if(a)
            for(int i=0;i<c;i++)
                matrix[0][i]=0;
        if(b)
            for(int j=0;j<r;j++)
                matrix[j][0]=0;
    }
};