class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char,int> m;
        unordered_set<char> set;
        stack<char> st;
        for(char c:s) m[c]++;
        for(char c:s)
        {
            m[c]--;
            if(set.find(c)!=set.end()) continue;
            while(!st.empty() && st.top() > c && m[st.top()]>0)
            {
                set.erase(st.top());
                st.pop();
            }
            st.push(c);
            set.insert(c);
        }
        string res = "";
        while(!st.empty())
        {
            res = st.top()+res;
            st.pop();
        }
        return res;
    }
};