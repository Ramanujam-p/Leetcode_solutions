class Solution {
public:
    int minimumDistance(vector<int>& nums) {
       int a=INT_MAX,n=nums.size();
       if(n<=2) return -1;

       for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(nums[i]==nums[j])
            for(int k=j+1;k<n;k++)
                if(nums[j]==nums[k])
                    a = min(a,2*(k-i));
       if(a==INT_MAX) return -1;
       return a;
    }
};