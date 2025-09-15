class Solution {
public:
    bool checkValidString(string s) {
        int l = 0 , h = 0 ;
        for(char c : s)
        {
            if(c == '(')
            {
                l++; h++;
            }
            else if(c == ')')
            {
                if(l>0) l--;
                h--;
            }
            else if(c == '*')
            {
                if(l>0) l--;
                h++;
            }
            if(h<0) return false;
        }
        return l == 0;
    }
};