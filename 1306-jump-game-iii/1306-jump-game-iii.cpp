class Solution {
public:
    bool dfs(vector<int> &arr,int i,vector<bool>& v)
    {
        if(i<0 || i>=arr.size() || v[i]) return false;
        if(arr[i]==0) return true;
        v[i]=true;
        return (dfs(arr,i+arr[i],v)) || (dfs(arr,i-arr[i],v));
    }
    bool canReach(vector<int>& arr, int start) {
        vector<bool> v(arr.size(),false);
        return dfs(arr,start,v);    
    }
};