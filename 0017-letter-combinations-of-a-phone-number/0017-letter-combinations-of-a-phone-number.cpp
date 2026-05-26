class Solution {
public:
    vector<string> ans;
    vector<string> m = {
        "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
    };
    void solve(int i,string &digits,string c)
    {
        if(i==digits.size()) {
            ans.push_back(c);
            return;
        }
        int a = digits[i]-'0';
        string b = m[a];
        for(char ch:b)
            solve(i+1,digits,c+ch);
    }
    vector<string> letterCombinations(string digits) {
            solve(0,digits,"");
            return ans;  
    }
};