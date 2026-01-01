class Solution {
public:
    void s(int &x,int &y)
    {
        int t = x;
        x = y;
        y = t;
    }
    void heapify(vector<int> &a,int n,int i)
    {
        int la = i;
        int l = 2*i+1;
        int r = 2*i+2;
        if(l<n&&a[l]>a[la])
            la = l;
        if(r<n&&a[r]>a[la])
            la = r;
        if(la!=i)
        {
            s(a[i],a[la]);
            heapify(a,n,la);
        }
    }
    void heapsort(vector<int> &a , int n)
    {
        for(int i=(n/2)-1;i>=0;i--)
            heapify(a,n,i);
        for(int i=n-1;i>0;i--)
        {
            s(a[0],a[i]);
            heapify(a,i,0);
        }
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int> a;
        vector<int> b = nums;
        int n = b.size();
        heapsort(b,n);
        for(int i=0;i<n;i++)
            if(a.find(b[i])==a.end())
                a[b[i]] = i;
        vector<int> r;
        for(int z:nums)
            r.push_back(a[z]);
        return r;
    }
};