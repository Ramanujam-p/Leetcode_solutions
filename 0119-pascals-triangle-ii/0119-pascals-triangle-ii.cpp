class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> a(rowIndex,1);
        for(int i=0;i<rowIndex+1;i++)
        {
             vector<int> r(i+1,1);
             for(int j=1;j<i;j++)
                r[j]=a[j-1]+a[j];
                a=r;
        }
        return a;
    }
};