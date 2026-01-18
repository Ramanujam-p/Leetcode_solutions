class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n = nums.size();
       if(n<=1) return nums;
       vector<int> ans;
       unordered_map<int,int> a;
       for(int x:nums)
            a[x]++;
       for(auto b:a)
            if(b.second > n/3)
                ans.push_back(b.first);
       return ans;
    }
};