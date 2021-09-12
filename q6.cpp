// find 2 arrays union
// use map as it doesn't allow duplicates 
// this takes time O(n+m)

class Solution{
    
    public:
    void Union(int* a, int*b, int n, int m)
    {
        map<int, int> mp;
        for(int i=0; i<n; i++)
        {
            mp.insert({a[i], i});
        }
        for(int i=0; i<m; i++)
        {
            mp.insert({b[i], i});
        }
        
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            cout<<it->first<<" ";
        }
    }
   
};
