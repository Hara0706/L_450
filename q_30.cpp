// chocolate distribution problem
// solve in O(n log n) time and space O(1)

class Solution
{
  public:
  long long findMinDiff(vector<long long> a, long long n, long long m){
    
         sort(a.begin(), a.end());
         
         long long i;
         long long mini = 1e9;
         
         for(i=0; i<a.size()-m+1; i++)
         {
             if((a[i+m-1] - a[i]) < mini)
             mini = a[i+m-1] - a[i];
         }
         
         return mini;
    }   
}
