class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<bool> a(n,true);
        a[0]=a[1]=false;
        for(int i=2;i<sqrt(n);i++)
        {
            if(a[i])
            {
                for(int j=i*i;j<n;j+=i)
                    a[j] = false;
            }
        }
        int c = 0;
        for(int i=2;i<n;i++)
            if(a[i]) c++;
        return c;
    }
};