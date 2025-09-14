class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int a = word1.size() , b = word2.size();
        string c = "" , d = "";
        for(int i = 0 ; i < a ; i++)     c += word1[i];
        for(int i = 0 ; i < b ; i++)     d += word2[i];
        if(c == d) return true;
        return false;
    }
};