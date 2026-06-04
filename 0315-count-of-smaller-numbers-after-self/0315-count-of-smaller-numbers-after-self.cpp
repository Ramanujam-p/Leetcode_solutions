class Solution {
public:
    vector<int> ans;
    void merge(vector<pair<int,int>> &a,int l,int m,int h)
    {
        vector<pair<int,int>> t;
        int s=0,left=l,right=m+1;
        while(left<=m && right<=h)
        {
            if(a[left].first<=a[right].first)
            {
                ans[a[left].second]+=s;
                t.push_back(a[left]);
                left++;
            }
            else{
                s++;
                t.push_back(a[right]);
                right++;
            }
        }
        while(left<=m){
            ans[a[left].second]+=s;
            t.push_back(a[left]);
            left++;
        }
        while(right<=h)
        {
            t.push_back(a[right]);
            right++;
        }
        for(int i=l;i<=h;i++)
            a[i]=t[i-l];
    }
    void m_s(vector<pair<int,int>> &a,int l,int h)
    {
        if(l>=h) return;
        int m = l + (h-l)/2;
        m_s(a,l,m);
        m_s(a,m+1,h);
        merge(a,l,m,h);
    }
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        ans.assign(n,0);
        vector<pair<int,int>> a;
        for(int i=0;i<n;i++)
            a.push_back({nums[i],i});
        m_s(a,0,n-1);
        return ans;
    }
};