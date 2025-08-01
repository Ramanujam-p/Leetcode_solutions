class Solution {
    public int maximumWealth(int[][] accounts) {
        int a[]=new int[accounts.length];
        for(int i=0;i<accounts.length;i++)
        {
            for(int j=0;j<accounts[i].length;j++)
            {
                a[i]+=accounts[i][j];
            }
        }
        int m=a[0];
        for(int i=1;i<a.length;i++)
            if(m<a[i])
                m=a[i];
                return m;
    }
}