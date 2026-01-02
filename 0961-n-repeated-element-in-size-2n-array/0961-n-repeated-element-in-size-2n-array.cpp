class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int z = -1;
        unordered_map<int,int>a;
        for(int x:nums)
            a[x]++;
        for(auto b:a)
            if(b.second>1)
                z=b.first;
        return z;
    }
};