// reverse a string or array 
// recursive and iterative approach
// time taken is O(N)

class Solution
{
    public:
    void reverseArray(int a[], int start, int end)
   {
    if(start>=end) 
    return;
    
    int temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    
    return reverseArray(a, start+1, end-1);
   }


};
