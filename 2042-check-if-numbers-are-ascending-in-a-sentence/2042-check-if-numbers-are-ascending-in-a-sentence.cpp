class Solution {
public:
    vector<int> extract_numbers(string s)
    {
        vector<int> y;
        int a=0;
        bool z=false;
        for(char c:s)
        {
            if(isdigit(c))
            {
                a = (a*10)+(c-'0');
                z=true;
            }
            else{
                if(z)
                {
                    y.push_back(a);
                    a=0;
                    z=false;
                }
            }
        }
        if(z) y.push_back(a);
        return y;
    }
    bool areNumbersAscending(string s) {
         vector<int> a;
         a = extract_numbers(s);
         int n = a.size();
         for(int i=0;i<n-1;i++)
            if(a[i]>=a[i+1])
                return false;
         return true;
    }
};