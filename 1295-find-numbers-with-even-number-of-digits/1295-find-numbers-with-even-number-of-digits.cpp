class Solution {
public:
    int findNumbers(vector<int>& nums) {
        vector<int> a;
        int ans=0;
        for(int x:nums)
        {
            int c=0;
            int t = x;
            while(t!=0)
            {
                t/=10;
                c++;
            }
            if(c%2==0) a.push_back(x);
        }
         return a.size();   
    }
};