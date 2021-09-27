// array of size n and a number k given
// find all nos appearing more than n/k times
// efficient method is hashing 
// time taken is O(N) and space is O(N)

class Solution
{
    public:
    vector<int> ans(int arr[], int n, int k)
    {
        vector<int> v;
        int x = n/k;
        
        unordered_map<int, int> freq;
        for(int i=0; i<n; i++)
        {
            freq[arr[i]]++;
        }
        
        for(auto i: freq)
        {
            if(i.second > x)
            {
                v.push_back(i.first);
            }
        }
        
        return v;
    }
};
