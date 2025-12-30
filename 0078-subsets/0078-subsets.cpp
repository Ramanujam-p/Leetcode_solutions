class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> r;
        int n = nums.size();
        int a = 1<<n;
        for(int i=0;i<a;i++)
        {
            vector<int> b;
            for(int j=0;j<n;j++)
                if(i&(1<<j))
                    b.push_back(nums[j]);
            r.push_back(b);
        }
        return r;
    }
};