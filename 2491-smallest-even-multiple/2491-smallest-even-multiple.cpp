class Solution {
public:
    int smallestEvenMultiple(int n) {
        int a = 2;
        if(n%2!=0) return n*a;
        return n;
    }
};