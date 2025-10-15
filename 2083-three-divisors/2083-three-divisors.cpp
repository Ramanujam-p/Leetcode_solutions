class Solution {
public:
    bool isThree(int n) {
        if(n<=2) return false;
        int c = 0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0) 
                c++;
        }
        if(c==3) return true;
        else return false;
    }
};