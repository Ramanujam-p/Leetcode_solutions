class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int> m;
        char first = 'a';
        for(int i=26;i>=0;i--)
        {
            if(first<='z')
            {
                m[first]=i;
                first++;
            }
        }
        int sum=0;
        int i=1;
        for(char single:s)
        {
            sum+=m[single] * i;
            i++;
        }
            
        return sum;
    }
};