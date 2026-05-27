class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> m;
        for(int a:nums1)
        {
            for(int b:nums2)
                m[a+b]++;
        }
        int z=0;
        for(int c:nums3)
        {
            for(int d:nums4)
            {
                int t = -(c+d);
                if(m.find(t)!=m.end())
                    z+=m[t];
            }
        }
        return z;
    }
};