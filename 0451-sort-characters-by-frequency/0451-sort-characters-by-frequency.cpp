class Solution {
public:
    string frequencySort(string s) {
        string a;
        unordered_map<char,int>b;
        for(char c:s)
            b[c]++;
        int m = 0;
        for(auto p:b)
            m = max(m,p.second);
        for(int i=m;i>0;i--){
            for(auto p:b)
            {
                if(p.second==i)
                {
                    for(int j=0;j<i;j++)
                        a+=p.first;
                }
            }
        }
        return a;
    }
};