class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum=0,max_sum=INT_MIN;
        for(int x:nums)
        {
            current_sum+=x;
            max_sum = max(max_sum,current_sum);
            if(current_sum<0) current_sum=0;
        }
        return max_sum;

    }
};