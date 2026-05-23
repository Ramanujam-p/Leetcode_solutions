class Solution {
public:
    void build_array(vector<int> &a)
    {
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i]==a[i+1]){
                a[i]=a[i]*2;
                a[i+1]=0;
            }
        }
    }
    vector<int> move_zeroes(vector<int> &a)
    {
        int i=0;
        for(int j=0;j<a.size();j++)
        {
            if(a[j]!=0)
            {
                swap(a[i],a[j]);
                i++;
            }
        }
        return a;
    }     
    vector<int> applyOperations(vector<int>& nums) {
        build_array(nums);
        return move_zeroes(nums);
    }
};