class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int d = INT_MAX;
        int ans;
        for(int i=0;i<n;i++){
            int l = i+1;
            int r = n-1;
            while(l<r)
            {
                int s = nums[i]+nums[l]+nums[r];
                int a = abs(s-target);
                if(a<d) 
                {
                    d = a;
                    ans = s;
                }
                if(s>target) r--;
                else l++;
            }
        }
        return ans;
    }
};