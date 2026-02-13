class Solution {
public:
     void b(int i,vector<int> &nums,vector<vector<int>> &a)
    {
        if(i==nums.size())
        {
            a.push_back(nums);
            return;
        }
        unordered_set<int> s;
         for(int j=i;j<nums.size();j++)
         {
            if(s.find(nums[j])!=s.end()) continue;
            s.insert(nums[j]);
            swap(nums[i],nums[j]);
            b(i+1,nums,a);
            swap(nums[i],nums[j]);
         }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector<vector<int>> a;
         b(0,nums,a);
         return a;
    }
};