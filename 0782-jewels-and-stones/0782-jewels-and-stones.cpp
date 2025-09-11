class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int s = 0;
        for(char ch : jewels)
        {
            for(char c: stones)
            {
                if(ch==c)
                    s++;
            }
        }
        return s;
    }
};