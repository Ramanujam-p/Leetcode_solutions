class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int l = 0,r=0,h=n-1;
        while(l<=h && r<=h)
        {
            if((nums[l]!=0 && nums[r]!=0) ||nums[r]!=0){
                swap(nums[l],nums[r]);
                l++;
                r++;
            } 
            else r++;
        }
    }
};