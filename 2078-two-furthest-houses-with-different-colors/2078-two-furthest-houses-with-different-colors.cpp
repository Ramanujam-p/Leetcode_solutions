class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size(),m=0;
        for(int j=n-1;j>=0;j--)
        {
            if(colors[0]!=colors[j])
            {
                m=max(m,j-0);
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(colors[n-1]!=colors[i])
            {
                m = max(m,(n-1)-i);
                break;
            }
        }
        return m;
    }
};