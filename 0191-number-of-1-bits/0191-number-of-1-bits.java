class Solution {
    public int hammingWeight(int n) {
        int t = n,s=0;
        while(t!=0)
        {
            int d=t%2;
            s+=d;
            t/=2;
        }
        return s;
    }
}