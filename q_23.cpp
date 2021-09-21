// maximum product subarray
// time is O(N) and space O(1)



class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long maxi = 1;
	    int mini = 1;
	    
	    long long maxs = 0;
	    int flag = 0;
	    
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i]>0)
	        {
	            maxi *= arr[i];
	            mini = min(mini*arr[i], 1);
	            flag = 1;
	        }
	        
	        else if(arr[i] == 0)
	        {
	            maxi = 1;
	            mini = 1;
	        }
	        
	        else
	        {
	            long long temp = maxi;
	            maxi = max(mini*arr[i], 1);
	            mini = temp*arr[i];
	        }
	        
	        if(maxs<maxi)
	        maxs = maxi;
	    }
	    
	    if(flag==0 && maxs == 0)
	    return 0;
	    
	    return maxs;
	}
};
