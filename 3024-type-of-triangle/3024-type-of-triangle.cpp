class Solution {
public:
    string triangleType(vector<int>& nums) {
        string z="";
        int a=nums[0],b=nums[1],c=nums[2];
        if(a+b<=c||a+c<=b||b+c<=a)
            z+="none";
        else if(a==b&&b==c)
            z+="equilateral";
        else if(a!=b && b!=c && a!=c)
            z+="scalene";
        else z+="isosceles";
        return z;
    }
};