class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for(int i1 = 0 ; i1 < n;i1+=2*k)
        {
        int i = i1;
        int j = min(i1+k-1,n-1);
        while(i<j)
        {
            char t = s[i];
            s[i]=s[j];
            s[j]=t;
            i++;
            j--;
        }
        }
        return s;
    }
};