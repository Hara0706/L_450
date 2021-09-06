// find min and max in array
// take pairs method is applicable
// time is O(N)

struct Pair
{
    int min;
    int max;
};

class Solution
{
    public:
    struct Pair getMinMax(int a[], int n)
    {
        struct Pair minmax;
        int i;
        
        if(n%2 == 0)
        {
            if(a[0]>a[1])
            {
                minmax.max = a[0];
                minmax.min = a[1];
            }
            else
            {
                minmax.max = a[1];
                minmax.min = a[0];
            }
            
            i=2;
        }
        
        else
        {
            minmax.min = a[0];
            minmax.max = a[0];
            
            i=1;
        }
        
        while(i<n-1)
        {
            if(a[i]>a[i+1])
            {
                if(a[i]>minmax.max)
                minmax.max = a[i];
                
                if(a[i+1]<minmax.min)
                minmax.min = a[i+1];
            }
            else
            {
                if(a[i+1]>minmax.max)
                minmax.max = a[i+1];
                
                if(a[i]<minmax.min)
                minmax.min = a[i];
            }
            
            i = i+2;
        }
        return minmax;
    }
   
};

