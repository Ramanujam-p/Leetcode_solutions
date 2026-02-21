class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> a;
        int n = nums.size();
        for(int i=1;i<n;i+=2)
        {
            int v = nums[i];
            int f = nums[i-1];
            for(int i=0;i<f;i++)
                a.push_back(v);
        }
        return a;
    }
};