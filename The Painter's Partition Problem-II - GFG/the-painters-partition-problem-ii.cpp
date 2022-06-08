// { Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    bool ispossible(int arr[],int n,int k,int mid)
    {
        int painterCount=1;
        int time=0;
        for(int i=0;i<n;i++)
        {
            if(time+arr[i]<=mid)
            {
                time+=arr[i];
            }
            else
            {
                painterCount++;
                if(painterCount>k || arr[i]>mid)
                {
                    return false;
                }
                time=arr[i];
            }
        }
        return true;
    }
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        int s=0;
        long long sum=0;
        long long ans=-1;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        long long e=sum;
        long long mid=s+(e-s)/2;
        while(s<=e)
        {
            if(ispossible(arr,n,k,mid))
            {
                ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        
    return ans;    
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}  // } Driver Code Ends