class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        int a = 0;
        for(int i=0;i<n;i++)
        {
            nums[i] = start + 2*i;
            a = a^nums[i];
        }
        return a;
    }
};