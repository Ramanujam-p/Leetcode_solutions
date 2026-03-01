class Solution {
public:
    int minPartitions(string n) {
        int a = 0;
        for(int x:n)
        {
            a=max(a,x-'0');
            if(a==9) break;
        }
        return a;
    }
};