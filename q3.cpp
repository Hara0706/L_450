
// find kth smallest element in array 
// sort the array

class Solution{
    public:
    
    int kthSmallest(int arr[], int l, int r, int k) {
       
        sort(arr, arr+r-l+1);
        return arr[k-1];
    }
};
