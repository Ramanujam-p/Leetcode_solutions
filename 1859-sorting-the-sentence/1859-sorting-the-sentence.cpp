class Solution {
public:
    string split_words(string s)
    {
        vector<string> a(10);
        string word = "";
        for(char c:s)
        {
            if(c!=' ')
                word+=c;
            else
            {
                int p = word.back()-'0';
                word.pop_back();
                a[p]=word;
                word="";
            }
        }
        int x = word.back()-'0';
        word.pop_back();
        a[x]=word;
        string ans = "";
        for(int i=1;i<10;i++)
        {
            if(a[i]!="")
            {
                ans+=a[i];
                ans+=" ";
            }
        }
        ans.pop_back();
        return ans;
    }
    string sortSentence(string s) {
        return split_words(s);
    }
};