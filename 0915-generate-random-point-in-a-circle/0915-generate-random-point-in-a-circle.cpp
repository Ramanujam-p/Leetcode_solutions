class Solution {
public:
    double r,x,y;
    Solution(double radius, double x_center, double y_center) {
        r = radius;
        x = x_center;
        y = y_center;
    }
    vector<double> randPoint() {
        double a = (double)rand()/RAND_MAX*2*M_PI , h=sqrt((double)rand()/RAND_MAX)*r, o=sin(a)*h , adj=cos(a)*h;
        return vector<double>{x+adj,y+o};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */