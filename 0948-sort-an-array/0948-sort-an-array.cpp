class Solution {
public:
    void heapify(vector<int>& nums,int n,int i)
    {
        int la = i , l = 2*i + 1 , r = 2*i + 2;
        if(l<n && nums[l]>nums[la]) la = l;
        if(r<n && nums[r]>nums[la]) la = r;
        if(la!=i) 
        {
            swap(nums[i],nums[la]);
            heapify(nums,n,la);
        }
    }
    vector<int> heapsort(vector<int>& nums,int n)
    {
        for(int i=(n/2)-1;i>=0;i--)
            heapify(nums,n,i);
        for(int i=n-1;i>0;i--)
        {
            swap(nums[0],nums[i]);
            heapify(nums,i,0);
        }
        return nums;
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        return heapsort(nums,n);
    }
};