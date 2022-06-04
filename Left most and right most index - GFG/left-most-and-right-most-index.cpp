// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        pair<long,long> p;
        int n=v.size();
        p.first=leftmostocc(v,x,n);
        p.second=rightmostocc(v,x,n);
        
        return p;
    }
    int leftmostocc(vector<long long> v, long long x, int n)
    {
        int start=0;
        int end=n-1;
        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<=end)
        {
            if(x==v[mid])
            {
                ans=mid;
                end=mid-1;
            }
            if(x>v[mid])
            {
                start=mid+1;
            }
            if(x<v[mid])
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
    int rightmostocc(vector<long long> v, long long x, int n)
    {
        int start=0;
        int end=n-1;
        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<=end)
        {
            if(x==v[mid])
            {
                ans=mid;
                start=mid+1;
            }            
            if(x>v[mid])
            {
                start=mid+1;
            }
            if(x<v[mid])
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}
  // } Driver Code Ends