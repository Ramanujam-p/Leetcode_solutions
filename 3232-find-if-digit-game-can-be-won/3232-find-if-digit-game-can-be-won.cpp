class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int a=0,b=0;
        for(int c:nums)
            c<10? a+=c:b+=c;
        return a!=b;
    }
};