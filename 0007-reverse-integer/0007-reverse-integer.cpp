class Solution {
public:
    int reverse(int x) {
    int r=0;
    if(x==0) return 0;
    while(x!=0)
    {
      int d=x%10;
      x/=10;
      if(r>INT32_MAX/10||(r==INT32_MAX&&d>7)) return 0;
      if(r<INT32_MIN/10||(r==INT32_MIN&&d<-8)) return 0;
      r=(r*10)+d;
    }
    return r;
    }
};