class Solution {
    public boolean isPalindrome(int x) {
        int o=x,r=0;
        while(x>0)
        {
          int d=x%10;
          r=(r*10)+d;
          x/=10;
        }
        return o==r;
    }
}