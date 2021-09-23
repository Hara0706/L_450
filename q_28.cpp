// triplet sum
// solved in O(N^2) time and space O(1)

class Solution
{
  public:
   bool find3Numbers(int A[], int n, int X)
    {
        sort(A, A+n);
        int l, r;
        int i;
        
        for(i=0; i<n-2; i++)
        {
            l = i+1;
            r = n-1;
            
            while(l<r)
            {
                if(A[i]+A[l]+A[r] == X)
                return true;
                
                else if(A[i]+A[l]+A[r] < X)
                l++;
                
                else 
                r--;
            }
        }
        
        return false;
    
    }

}
