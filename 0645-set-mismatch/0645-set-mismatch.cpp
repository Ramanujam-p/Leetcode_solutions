class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int dup=-1,mis=-1;
        vector<int> a(n+1,0);
        for(int b:nums)
            a[b]++;
        for(int i=1;i<=n;i++)
        {
            if(a[i]==2)
                dup=i;
            if(a[i]==0)
                mis=i;
        }
        return{dup,mis};
    }
};