class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> m;
        for(string& b:arr)
            m[b]++;
        for(string& b:arr)
        {
            if(m[b]==1)
            {
                 k--;
                 if(k==0) return b;
            } 
        }
        return "";
    }
};