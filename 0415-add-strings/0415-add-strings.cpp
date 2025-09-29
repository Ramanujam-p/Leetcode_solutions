class Solution {
public:
    string addStrings(string num1, string num2) {
        string r = "";
        int i = num1.size()-1;
        int j = num2.size()-1;
        int c = 0;
        while(i>=0||j>=0||c)
        {
            int m = (i>=0)?num1[i--]-'0':0;
            int n = (j>=0)?num2[j--]-'0':0;
            int s = m+n+c;
            c = s/10;
            r+=(s%10)+'0';
        }
        reverse(r.begin(),r.end());
        return r;
    }
};