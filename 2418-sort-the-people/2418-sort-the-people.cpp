class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string> m;
        for(int i=0;i<names.size();i++)
            m[heights [i]]=names[i];
        sort(heights.rbegin(),heights.rend());
        vector<string> a;
        for(int b: heights)
            a.push_back(m[b]);
        return a;
    }
};