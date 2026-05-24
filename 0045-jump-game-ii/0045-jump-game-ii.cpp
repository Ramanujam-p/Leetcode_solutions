class Solution {
public:
    int jump(vector<int>& nums) {
       int l=0,r=0,f=0,j=0,n=nums.size();
       while(r<n-1)
       {
        f=0;
        for(int i=l;i<=r;i++)
            f=max(f,i+nums[i]);
        l=r+1;
        r=f;
        j++;
       }
       return j;
    }
};