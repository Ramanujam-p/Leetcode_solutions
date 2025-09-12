class Solution {
public:
    bool doesAliceWin(string s) {
        string a = "aeiou";
        if(find_first_of(s.begin(),s.end(),a.begin(),a.end())!=s.end())
        return true;
        return false;
    }
};