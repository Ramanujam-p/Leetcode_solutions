class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> a;
        for(int x:nums)
        {
            if(m.find(x)!=m.end())
                a.push_back(x);
            else m[x]++;
        }
        return a;
    }
};