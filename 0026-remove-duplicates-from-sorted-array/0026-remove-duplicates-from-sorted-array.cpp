class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;//initialize the pointer the store the unique element
        for(int j=1;j<nums.size();j++) //traverse the array
        {
           if(nums[j]!=nums[i-1])  
           {
            nums[i]=nums[j];
            i++;
           }
        }
        return i;
    }
};