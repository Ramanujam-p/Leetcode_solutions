class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0,n=nums.size();i<n-2;i++)
        {
            if(i&&nums[i]==nums[i-1]) continue;
            int l=i+1,r=n-1;
            while(l<r){
                int s=nums[i]+nums[l]+nums[r];
                if(s==0)
                {
                    res.push_back({nums[i],nums[l++],nums[r--]});
                    while(l<r&&nums[l]==nums[l-1]) l++;
                    while(l<r&&nums[r]==nums[r+1]) r--; 
                }
                else if(s<0) l++;
                else r--;
            }
        }
        return res;
    }
};