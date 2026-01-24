class Solution {
public:
    bool isBalanced(string num) {
        vector<int> a,b;
        for(int i=0;i<num.size();i++)
        {
            if(i%2==0) a.push_back(num[i]-'0');
            else b.push_back(num[i]-'0');
        }
        int s1 = 0,s2=0;
        for(int x:a)
            s1+=x;
        for(int y:b)
            s2+=y;
        return s1==s2;
    }
};