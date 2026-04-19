class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
         int n = arr.size(),m=-1;
         for(int j=n-1;j>=0;j--)
         {
           int t = arr[j];
           arr[j]=m;
           m = max(m,t);
         }
         return arr;
    }
};