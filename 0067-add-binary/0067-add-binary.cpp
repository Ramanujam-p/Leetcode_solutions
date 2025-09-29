class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int i=a.size()-1,j=b.size()-1,c=0;
        while(i>=0||j>=0||c)
        {
        int m1=(i>=0)?a[i--] - '0' : 0;
        int m2=(j>=0)?b[j--] - '0' : 0;
        int s=m1+m2+c;
        c=s/2;
        res+=(s%2)+ '0';
        }
        reverse(res.begin(),res.end());
        return res;
    }
};