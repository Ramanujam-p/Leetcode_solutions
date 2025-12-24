class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int s = 0;
        for(int i=0;i<nums.size();i++)
             s+=nums[i];
        if(s%2==0) return nums.size()-1;
        return 0;
    }
};