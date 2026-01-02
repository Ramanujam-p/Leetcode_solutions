class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>a;
        int s=0;
        vector<int>z;
        for(int x:nums)
            a[x]++;
        for(auto b:a)
            if(b.second==1)
                z.push_back(b.first);
        for(int y:z)
            s+=y;
        return s;
    }
};