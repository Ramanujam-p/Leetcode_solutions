class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                 int b = nums[i];
                 a.push_back(b);
            }
            else continue;
        }
        unordered_map<int,int> x;
        for(int y:a)
            x[y]++;
        int max = 0;
        int ans = -1;
        for(auto p:x)
        {
            int ele = p.first;
            int cou = p.second;
            if(cou>max)
            {
                max = cou;
                ans = ele;
            }
            else if(cou==max)
                ans = min(ans,ele);      
        }
           return ans;        
    }
};