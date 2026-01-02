class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
      vector<int>a;
      unordered_set<int>z(nums1.begin(),nums1.end());
      for(int x:nums2)
        if(z.count(x))
            a.push_back(x);
      if(a.empty()) return -1;
      sort(a.begin(),a.end());
      return a[0];
    }
};