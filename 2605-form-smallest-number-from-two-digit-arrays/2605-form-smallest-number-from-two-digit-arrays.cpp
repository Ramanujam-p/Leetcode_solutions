class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        for(int x:nums1)
            m[x]++;
        int mini = INT_MAX;
        for(int y:nums2)
        {
            if(m.find(y)!=m.end())
            {
                mini = min(mini,y);
            }
            else continue;
        }
        if(mini<INT_MAX) return mini;
        int n1=nums1.size(),n2=nums2.size(),m1=nums1[0],m2=nums2[0];
        for(int i=1;i<n1;i++)
            if(m1>nums1[i])
                m1=nums1[i];
        for(int i=1;i<n2;i++)
            if(m2>nums2[i])
                m2=nums2[i];
        cout<<m1<<m2;
        if(m1>m2)
            return m2*10 + m1;
        else
            return m1*10 + m2;
    }
};