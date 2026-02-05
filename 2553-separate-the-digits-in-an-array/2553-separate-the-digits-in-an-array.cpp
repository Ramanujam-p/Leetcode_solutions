class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> b;
        for(int i=0;i<nums.size();i++)
        {
            int a = nums[i];
            if(a<10)
            {
                b.push_back(a);
            }
            else
            {
                vector<int> t;
                while(a!=0)
                {
                    int d = a%10;
                    t.push_back(d);
                    a/=10;
                }
                reverse(t.begin(),t.end());
                for(int x:t)
                    b.push_back(x);
            }
            
        }
        return b;
    }
};