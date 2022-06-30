// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	    int low=0;
	    int high=N-1;
	    int mid;
	    
	    if(high==0)
	        return A[0];
	    else if(A[0]!=A[1])
	        return A[0];
	    else if(A[high]!=A[high-1])
	        return A[high];
	        
        while(low<=high)
        {
            mid=low+(high-low)/2;
            
            if(A[mid]!=A[mid-1] && A[mid]!=A[mid+1])
                return A[mid];
            if(((mid%2)==0 && A[mid]==A[mid+1]) || ((mid%2)==1 && A[mid]==A[mid-1]))
                low=mid+1;
            else
                high=mid-1;
        }
        return A[mid];
	}
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}
  // } Driver Code Ends