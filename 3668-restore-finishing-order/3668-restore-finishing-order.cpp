class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> a;
        unordered_set<int> b;
        for(int x:friends)
            b.insert(x);
        for(int y:order)
        {
            if(b.count(y))
                a.push_back(y);
            else continue;
        }
        return a;
    }
};