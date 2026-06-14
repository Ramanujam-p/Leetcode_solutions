class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string a = "";
        for(string &b:words)
        {
            long long s=0;
            for(char c:b)
                s+=weights[c-'a'];
            a.push_back('z'-(s%26));
        }
        return a;
    }
};