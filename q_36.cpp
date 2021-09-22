// find median of 2 sorted arrays of different sizes
// time is O(log n + log m)
// use binary search


class Solution
{
    public:
    int median(vector<int> &a, vector<int> &b)
    {
        int n = a.size();
        int m = b.size();
        
        if(n>m) 
        return median(b, a);
        
        int l = 0, r = n;
        int midi = (n+m+1)/2;
        
        while(l<=r)
        {
            int mid = (l+r)/2;
            int la = mid;
            int lb = midi - mid;
            int lfa = (la>0)? a[la-1]: INT_MIN;
            int lfb = (lb>0)? b[lb-1]: INT_MIN;
            int rfa = (ra>0)? a[ra-1]: INT_MAX;
            int rfb = (rb>0)? b[rb-1]: INT_MAX;
            
            if(lfa<=rfb && lb<=ra)
            {
                if((m+n)% 2 == 0)
                return (max(lfa, lfb)+min(rfa, rfb))/2;
                return max(lfa, lfb);
            }
            else if(lfa>rfb)
            {
                r = mid-1;
            }
            else
            l = mid+1;
        }
        
        return 0.0;
    }
    
    
};
