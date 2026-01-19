class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        unordered_set<char> s = {'a','e','i','o','u'};
        int c=0;
        for(int i=left;i<=right;i++)
        {
            string x = words[i];
            if(s.count(x[0]) && s.count(x[x.size()-1])) c++;
        }
        return c;
    }
};