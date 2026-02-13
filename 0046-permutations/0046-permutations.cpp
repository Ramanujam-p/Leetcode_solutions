class Solution {
public:
    void b(int i,vector<int> &nums,vector<vector<int>> &a)
    {
        if(i==nums.size())
        {
            a.push_back(nums);
            return;
        }
         for(int j=i;j<nums.size();j++)
         {
            swap(nums[i],nums[j]);
            b(i+1,nums,a);
            swap(nums[i],nums[j]);
         }
    }
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> a;
         b(0,nums,a);
         return a;
    }
};