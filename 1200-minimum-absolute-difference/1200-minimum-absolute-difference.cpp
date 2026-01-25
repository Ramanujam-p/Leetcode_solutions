class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int m = abs(arr[0]-arr[1]);
        vector<vector<int>> a;
        for(int i=1;i<arr.size();i++)
        {
            int t = abs(arr[i]-arr[i-1]);
            if(t<m)
            {
                a.clear();
                m=t;
            }
            if(t==m)
                a.push_back({arr[i-1],arr[i]});
        }
        return a;
    }
};