class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> a(n);
        priority_queue<pair<int,int>> m;
        for(int i = 0 ; i < n ; i++) m.push({score[i],i});
        vector<string> b = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        int c = 1;
        while(!m.empty())
        {
            auto t = m.top();
            m.pop();
            int d = t.second;
            if(c < 4 ) a[d] = b[c - 1];
            else a[d] = to_string(c);
            c++;
        }
        return a;   
    }
};