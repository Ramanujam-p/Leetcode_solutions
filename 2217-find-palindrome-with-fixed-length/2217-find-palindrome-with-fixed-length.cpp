class Solution {
public:
    vector<long long> kthPalindrome(vector<int>& queries, int intLength) {
        vector<long long> a;
        int h = (intLength+1)/2;
        long long s = pow(10,h-1),e=pow(10,h);
        for(int q:queries)
        {
            long long p = s+q-1;
            if(p>=e)
            {
                a.push_back(-1);
                continue;
            }
            string fh = to_string(p);
            string sh = fh; 
            if(intLength%2==1)
                sh.pop_back();
            reverse(sh.begin(),sh.end());
            string palin = fh+sh;
            a.push_back(stoll(palin));
        }
        return a;
    }
};