class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> a,b,c,ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<pivot) 
                a.push_back(nums[i]);
            else if(nums[i]==pivot)
                c.push_back(nums[i]);
            else b.push_back(nums[i]);
        }
        for(int x:a)
            ans.push_back(x);
        for(int x:c)
            ans.push_back(x);
        for(int x:b)
            ans.push_back(x);   
        return ans;
    }
};