class Solution {
public:
    int averageValue(vector<int>& nums) {
        int s = 0 , c = 0;
        for(int a:nums)
        {
            if(a%6==0)
            {
                s+=a;
                c++;
            }
        }
        if(c==0) return 0;
        return s/c;
    }
};