class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>a(n+1,0);
        vector<int>c;
        for(int b:nums)
            a[b]++;
        for(int i=1;i<=n;i++)
            if(a[i]==0)
                c.push_back(i);
        return c;
    }
};