class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int a = 1<<n;
        set<vector<int>> c;
        for(int i=0;i<a;i++)
        {
            vector<int> b;
            for(int j=0;j<n;j++)
                if(i&(1<<j))
                    b.push_back(nums[j]);
            c.insert(b);
        }
        vector<vector<int>> z(c.begin(),c.end());
        return z;
    }
};