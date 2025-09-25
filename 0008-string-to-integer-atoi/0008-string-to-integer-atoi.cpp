class Solution {
public:
    int myAtoi(string s) {
        int i=0,si=1,n=s.size();
        long r=0;
        while(i<n && s[i]==' ')
        {
            i++;
        }
        if(i<n && s[i]=='+'||s[i]=='-')
        {
            si=(s[i]=='-')?-1:1;
            i++;
        }
        while(i<n&&isdigit(s[i]))
        {
            r=(r*10)+(s[i]-'0');
            if(r*si<=INT_MIN) return INT_MIN;
            if(r*si>=INT_MAX) return INT_MAX;
            i++;
        }
        return static_cast<int>(r*si);
    }
};