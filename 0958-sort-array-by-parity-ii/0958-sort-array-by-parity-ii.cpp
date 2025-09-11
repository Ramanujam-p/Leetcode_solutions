class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        stable_partition(nums.begin(),nums.end(),[](int x){return x%2==0;});
        int n = nums.size(),a = 0 , b = 1;
        vector<int> r(n);
        for(int c : nums)
        {
            if(c%2==0)
            {
                r[a] = c;
                a+=2;
            }
            else
            {
                r[b] = c;
                b+=2;
            }
        }
        return r; 
    }
};