class Solution {
public:
    bool isValid(string word) {
        int n=word.size();
        if(n<3) return false;
        bool v=false,cons=false;
        for(char c:word)
        {
            if(!isalnum(c)) return false;
            if(isalpha(c))
            {
                char l = tolower(c);
                if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u')
                    v = true;
                else
                    cons = true;
            }
        }
        return v && cons;
    }
};