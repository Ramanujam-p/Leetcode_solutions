class Solution {
public:
    int passwordStrength(string password) {
        int s=0;
        string z="";
        unordered_set<char> m;
        for(char c:password) if(!m.count(c)){
            z+=c;
            m.insert(c);
        } 
        set<char> a = {'!','@','#','$'};
        for(char c:z)
        {
            if(c>='a' && c<='z') s++;
            else if(c>='A' && c<='Z') s+=2;
            else if(isdigit(c)) s+=3;
            else if(a.find(c)!=a.end()) s+=5;
            else continue;
        }
        return s;

    }
};