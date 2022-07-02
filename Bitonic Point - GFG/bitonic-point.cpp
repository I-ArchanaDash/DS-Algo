// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int start=0;
	    int end=n-1;
	    int mid=start+(end-start)/2;
	    while(start<end)
	    {
	        if(arr[mid]<arr[mid+1])
	            start=mid+1;
	        else
	            end=mid;
	        mid=start+(end-start)/2;
	    }
	    return arr[start];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends