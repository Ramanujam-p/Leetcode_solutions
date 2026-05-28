class Solution {
public:
    string decodeString(string s) {
        string ans = "";
        stack<pair<string,int>> st;
        int num=0;
        for(char c:s)
        {
            if(isdigit(c))
                num=(num*10)+(c-'0');
            else if(c=='[')
            {
                st.push({ans,num});
                ans="";
                num=0;
            }
            else if(c==']')
            {
                string p = st.top().first;
                int z = st.top().second;
                st.pop();
                string y="";
                while(z--) y+=ans;
                ans=p+y;
            }
            else ans+=c;
        }
        return ans;

        
    }
};