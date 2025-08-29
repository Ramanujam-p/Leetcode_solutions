class Solution {
public:
    bool isPalindrome(string s) {
        string clean="";
        for(char ch:s)
            if(isalnum(ch))
                clean+=tolower(ch);
        int n=clean.size();
        for(int i=0;i<n;i++)
            if(clean[i]!=clean[n-1-i])
                return false;
        return true;
    }
};