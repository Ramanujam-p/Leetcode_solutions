class Solution {
    public int diagonalSum(int[][] mat) {
       int n = mat.length;
       int r = 0;
       for(int i=0;i<n;i++)
       {
        r+=mat[i][i];
        r+=mat[i][n-1-i];
       }
       if(n%2==1)
        r-=mat[n/2][n/2];
       return r;
    }
}
         
       
