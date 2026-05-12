class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(),tasks.end(),
        [](vector<int> &a,vector<int> &b){
            return (a[1]-a[0])>(b[1]-b[0]);
        }
        );
        int a=0,curr=0;
        for(auto &t:tasks)
        {
            int actual = t[0];
            int minimum = t[1];
            if(curr<minimum){
                a+=(minimum-curr);
                curr = minimum;
            }
            curr-=actual;
        }
        return a;
    }
};