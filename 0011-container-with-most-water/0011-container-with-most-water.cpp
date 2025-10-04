class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int ma = 0;
        while(l<r)
        {
            int w = r-l;
            int h = min(height[r],height[l]);
            int a = w*h;
            ma = max(a,ma);
            if(height[l]<height[r]) l++;
            else r--;
        }
        return ma;
    }
};