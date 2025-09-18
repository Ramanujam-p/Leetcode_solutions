class Solution {
public:
    string toHex(int num) {
        stringstream a;
        a<<hex<<num;
        return a.str();
    }
};