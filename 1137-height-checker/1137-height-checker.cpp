class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> a = heights;
        int n = heights.size();
        sort(a.begin(),a.end());
        int c = 0;
        for(int i=0;i<n;i++)
        {
            if(heights[i]!=a[i])
                c++;
        }
        return c;
    }
};