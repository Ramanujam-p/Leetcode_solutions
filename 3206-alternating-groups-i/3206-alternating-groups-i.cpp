class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n = colors.size(),a=0;
        for(int i=0;i<n;i++)
        {
            int l = (i-1+n)%n;
            int r = (i+1)%n;
            if(colors[i]!=colors[l] &&colors[i]!=colors[r])
                a++;
        }
        return a;
    }
};