class Solution {
public:
    int maxvowels(string s)
    {
        unordered_map<char,int> v;
        string vowels = "aeiou";
        for(char c: s)
            if(vowels.find(c)!=string::npos)
                v[c]++;
        int mv = 0;
        for(const auto& pair:v)
            if(pair.second>mv)
                mv = pair.second;
        return mv; 
    }
    int maxcons(string s)
    {
        unordered_map<char,int> cons;
        string consonants = "bcdfghjklmnpqrstvwxyz";
        for(char c: s)
            if(consonants.find(c)!=string::npos)
                cons[c]++;
        int mc = 0;
        for(const auto& pair:cons)
            if(pair.second>mc)
                mc = pair.second;
        return mc;
    }
    int maxFreqSum(string s) {
        return maxvowels(s) + maxcons(s);
    }
};