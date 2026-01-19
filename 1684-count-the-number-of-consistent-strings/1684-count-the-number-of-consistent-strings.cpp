class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> a;
        for(char c:allowed)
            a.insert(c);
        int c = 0;
        for(string b:words)
        {
            bool d = true;
            for(char e:b)
            {
                if(a.find(e)==a.end())
                {
                d = false;
                break;
                }
            }
            if(d) c++;
        }
        return c;
    }
};