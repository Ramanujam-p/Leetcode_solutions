class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> m;
        while(n!=0)
        {
            int d = n%10;
            m[d]++;
            n/=10;
        }
        int s=0;
        for(auto y:m)
            s+=(y.first * y.second);
        return s;
    }
};