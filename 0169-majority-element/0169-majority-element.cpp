class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size();
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        int c = INT_MIN,ans=0;
        for(auto p:m)
        {
            if(p.second>c)
            {
                ans=p.first;
                c=p.second;
            }
        }
        return ans;
    }
};