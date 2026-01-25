class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int s = 0,n=cost.size();
        if(n<=2)
        {
            for(int x:cost)
                s+=x;
             return s;
        }  
        sort(cost.rbegin(),cost.rend());
        if(n==4) return cost[0]+cost[1]+cost[3];
        for(int i=0;i<n;i+=3)
        {
            s+=cost[i];
            if(i+1<n)
                s+=cost[i+1];
        }
            
        return s;
    }
};