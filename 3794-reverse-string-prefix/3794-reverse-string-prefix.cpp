class Solution {
public:
    string reversePrefix(string s, int k) {
        int i=0,j=k-1;
        while(i<=j)
        {
            char a = s[i];
            s[i]=s[j];
            s[j]=a;
            i++;
            j--;
        }
        return s;
    }
};