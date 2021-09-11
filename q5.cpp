
// move all negative nos to one side of array 
// this is to be done in O(1)
// time is O(N)

class Solution{
    
    public:
    void rearrange(int a[], int n)
    {
        int j = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i]<0)
            {
                if(i!=j)
                swap(a[i], a[j]);
                
                j++;
            }
        }
    }
    
};
