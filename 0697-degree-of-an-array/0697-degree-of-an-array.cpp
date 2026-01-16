class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>f,l,freq;
        int d = 0 , a = nums.size();
        for(int i=0;i<a;i++)
        {
            if(!f.count(nums[i]))
                f[nums[i]]=i;
            l[nums[i]]=i;
            freq[nums[i]]++;
        }
        for(auto &p:freq)
                d = max(d,p.second);
        for(auto &p:freq)
            if(p.second==d)
                a = min(a,l[p.first]-f[p.first]+1);
        return a;
    }
};