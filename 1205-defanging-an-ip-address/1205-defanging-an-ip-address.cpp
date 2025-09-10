class Solution {
public:
    string defangIPaddr(string address) {
        string r = "";
        for(char a:address)
        {
            if(a=='.')
                r+="[.]";
            else
                r+=a;
        }
        return r;
    }
};