class Solution {
public:
    int titleToNumber(string columnTitle)   {
         int r = 0;
         for(char c:columnTitle)
             {
                 int v = c - 'A' + 1;
                 r = r * 26 + v;
             }
        return r;
   }
};