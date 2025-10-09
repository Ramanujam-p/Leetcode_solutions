class Solution {
public:
    int firstUniqChar(string s) {
        int a[256]={0};
        for(char c:s)
            a[c]++;
        int n=s.size();
        for(int i=0;i<n;i++)
            if(a[s[i]]==1)
                return i;
        return -1;
    }
};