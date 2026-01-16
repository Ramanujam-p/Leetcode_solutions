class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> a;
        int c = 0;
        for(int x:nums)
        {
            if(x==0) continue;
            else if(!a.count(x))
            {
                c++;
                a.insert(x);
            }
            else continue;
        }
        return c;
    }
};