
// find the maximaum profit in buy and sell a stock at most 2 times a day
// time taken is to be O(N) and space O(1)

class Solution
{
    public:
    int maxpro(int arr[], int n)
    {
        int maxp = 0;
        for(int i=1; i<n; i++)
        {
            int sub = arr[i] - arr[i-1];
            if(sub > 0) 
            maxp += sub;
        }
        
        return maxp;
    }
};
