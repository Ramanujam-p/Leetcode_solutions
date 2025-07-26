class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char c=coordinates[0];
        int r=coordinates[1]-'0';
        int co=c-'a'+1;
        if((co+r)%2==0) return false;
        return true;
    }
};