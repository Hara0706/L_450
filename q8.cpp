// maximun subarray sum 
// kadane algorithm 
// time is O(n) and space is O(1)

class Solution{
    
    public:
    long long maxSubarraySum(int arr[], int n){
        
       
        long long sum = 0;
        long long maxi = INT_MIN;
        
        for(long long it=0; it<n; it++)
        {
            sum+=arr[it];
            maxi = max(sum, maxi);
            if(sum<0) sum = 0;
            
        }
        return maxi;
    }
   
};
