class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> a;
        for(char b:s)
            a.insert(b);
        return a.size();
    }
};