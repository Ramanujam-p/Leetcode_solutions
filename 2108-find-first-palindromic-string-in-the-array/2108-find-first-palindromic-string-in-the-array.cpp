class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string a = "";
        for(string b:words)
        {
            string r = b;
            reverse(r.begin(),r.end());
            if(b==r){
                a+=b;
                break;
            } 
        }
        return a;
    }
};