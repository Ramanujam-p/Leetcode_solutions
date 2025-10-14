class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> r;
        int n = nums.size();
        for(int i=0;i<n;i++)
            r.push_back(nums[i]*nums[i]);
        sort(r.begin(),r.end());
        return r;
    }
};