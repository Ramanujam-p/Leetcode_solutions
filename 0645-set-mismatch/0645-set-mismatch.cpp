class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n = nums.size(),actual_sum=0,actual_sum_of_squares=0,expected_sum=(n*(n+1))/2,expected_sum_of_squares=(n*(n+1)*((2*n)+1))/6;
        for(int i=0;i<n;i++)
        {
            actual_sum+=nums[i];
            actual_sum_of_squares+=nums[i]*nums[i];
        }
        long long x=actual_sum-expected_sum,y=actual_sum_of_squares-expected_sum_of_squares,A=(x+(y/x))/2;
        return {(int)A,(int)(A-x)};

    }
};