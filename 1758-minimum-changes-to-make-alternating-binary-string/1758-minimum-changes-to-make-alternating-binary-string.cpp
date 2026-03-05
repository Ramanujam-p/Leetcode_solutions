class Solution {
public:
    int minOperations(string s) {
        int z = 0,o=0,n=s.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(s[i]!='0')
                    z++;
            }
            else
                {
                if(s[i]!='1')
                    z++;
                }
            if(i%2==0 )
            {
                if(s[i]!='1')
                    o++;
            }
            else
               {
                if(s[i]!='0')
                    o++;
                }
    }
        return min(o,z);
    }
};