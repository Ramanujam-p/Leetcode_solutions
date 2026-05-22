class Solution {
public:

    int finding_pivot(string a)
    {
        int n = a.size();

        int j = n - 1;

        while(j > 0)
        {
            if(a[j] > a[j - 1])
                return j - 1;

            else
                j--;
        }

        return -1;
    }

    char finding_smallest_after_pivot(string a, int pivot)
    {
        int z = a.size();

        vector<char> y;

        for(int i = pivot + 1; i < z; i++)
        {
            if(a[i] > a[pivot])
                y.push_back(a[i]);
        }

        sort(y.begin(), y.end());

        return y[0];
    }

    string swap_both(string a, int pivot, char smallest)
    {
        int index = -1;

        for(int i = a.size() - 1; i >= 0; i--)
        {
            if(a[i] == smallest)
            {
                index = i;
                break;
            }
        }

        swap(a[pivot], a[index]);

        sort(a.begin() + pivot + 1, a.end());

        return a;
    }

    int nextGreaterElement(int n) {

        if(n < 10)
            return -1;

        string a = to_string(n);

        int pivot = finding_pivot(a);

        if(pivot < 0)
            return -1;

        char smallest = finding_smallest_after_pivot(a, pivot);

        string b = swap_both(a, pivot, smallest);

        long long x = stoll(b);

        if(x > INT_MAX)
            return -1;

        return (int)x;
    }
};