class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t p = haystack.find(needle);
        if(p!=string::npos)
            return p;
        return -1;
    }
};