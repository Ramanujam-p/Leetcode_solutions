class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        vector<string> z;
        unordered_map<char,int> a;
        for(char c:chars)
            a[c]++;
        bool check=true;
        for(string w:words)
        {
            unordered_map<char,int> b = a;
            check=true;
            for(char c:w)
            {
                if(b[c]>0)
                    b[c]--;
                else {
                    check=false;
                    break;
                }
            }
            if(check==true)
                z.push_back(w);
        }
        for(string y:z)
            for(char c:y)
                ans++;
        return ans;
    }
};