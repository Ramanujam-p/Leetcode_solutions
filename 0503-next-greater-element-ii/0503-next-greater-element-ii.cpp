class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> a;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int x = nums[i%n];
            bool found=false;
            for(int j=i+1;j<2*n-1;j++)
            {
                if(nums[j%n]>x)
                {
                    a.push_back(nums[j%n]);
                    found=true;
                    break;
                } 
            }
            if(!found) a.push_back(-1);
        }
        return a;
    }
};