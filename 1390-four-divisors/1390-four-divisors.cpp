class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int s = 0;
        for(int i=0;i<nums.size();i++)
        {
           vector<int>a;
           for(int j=1;j<=nums[i];j++)
           {
            if(nums[i]%j==0)
            {
                a.push_back(j);
                if(a.size()>4) break;
            }
           }
           if(a.size()==4)
            {
              for(int x:a)
                s+=x;
            }
        }
        return s;
        
    }
};