class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>a(nums1.begin(),nums1.end());
        unordered_set<int>r;
        for(int n:nums2)
            if(a.count(n))
                r.insert(n);
        return vector<int>(r.begin(),r.end());
    }
};