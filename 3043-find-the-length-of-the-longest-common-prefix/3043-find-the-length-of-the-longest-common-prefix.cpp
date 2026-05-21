class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string> s;
        for(int x:arr1)
        {
            string a = to_string(x);
            string t="";
            for(char c:a)
            {
                t+=c;
                s.insert(t);
            }
        }
        int ans=0;
        for(int x:arr2)
        {
            string b = to_string(x);
            string t="";
            for(int i=0;i<b.size();i++)
            {
                t+=b[i];
                if(s.count(t)) ans = max(ans,i+1);
            }
        }
        return ans;
    }
};