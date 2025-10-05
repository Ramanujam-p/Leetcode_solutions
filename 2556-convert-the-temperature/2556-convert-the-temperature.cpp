class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> a;
        double k=0.00;
        k+=celsius+273.15;
        double f=0.0;
        f+=(celsius*1.80)+32.00;
        a.push_back(k);
        a.push_back(f);
        return a;
    }
};