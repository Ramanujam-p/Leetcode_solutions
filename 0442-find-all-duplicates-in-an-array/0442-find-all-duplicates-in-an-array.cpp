class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>a(n+1,0);
        vector<int>b;
        for(int y:nums)
            a[y]++;
        for(int i=1;i<=n;i++)
            if(a[i]==2)
                b.push_back(i);
        return b;
    }
};