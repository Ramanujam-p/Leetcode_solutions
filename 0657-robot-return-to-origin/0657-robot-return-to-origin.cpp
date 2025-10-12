class Solution {
public:
    bool judgeCircle(string moves) {
        int a=0,b=0;
        for(char c:moves)
        {
            if(c=='U') a++;
            if(c=='D') a--;
            if(c=='R') b++;
            if(c=='L') b--;
        }
        if(a==0&&b==0) return true;
        return false;
    }
};