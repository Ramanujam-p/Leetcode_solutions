class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size(),c=0;
        if(n==1) return true;
        for(int i=0;i<n;i++)
            if(isupper(word[i]))
                c++;
        if(c==1 && isupper(word[0]))
            return true;
        if(c==0 || c==n)
            return true;
        else return false;
    }
};