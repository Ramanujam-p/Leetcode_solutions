class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int a=INT_MAX;
        for(int i=0;i<landStartTime.size();i++)
        {
            for(int j=0;j<waterStartTime.size();j++)
            {
                a=min(a,max(landStartTime[i]+landDuration[i],waterStartTime[j])+waterDuration[j]);
                a=min(a,max(waterStartTime[j]+waterDuration[j],landStartTime[i])+landDuration[i]);
            }
        }
        return a;
    }
};