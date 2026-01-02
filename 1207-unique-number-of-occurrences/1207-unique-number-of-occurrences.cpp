class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> a;
        unordered_set<int>b;
        for(int x:arr)
            a[x]++;
        for(auto c:a)
        {
            if(b.count(c.second))
                return false;
            b.insert(c.second);
        }
        return true;
    }
};