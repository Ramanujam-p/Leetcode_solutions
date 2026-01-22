class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m=candies[0],n=candies.size();
        for(int i=0;i<n;i++)
            if(candies[i]>m)
                m = candies[i];
        for(int i=0;i<n;i++)
            candies[i]+=extraCandies;
        vector<bool> a;
        for(int i=0;i<n;i++)
            if(candies[i]<m)
                a.push_back(false);
            else a.push_back(true);
        return a;
    }
};