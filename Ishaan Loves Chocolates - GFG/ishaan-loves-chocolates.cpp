// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


int chocolates(int arr[], int n);


int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        cout << chocolates(arr, n);
        cout << endl;
        
    }

}
// } Driver Code Ends


int chocolates(int arr[], int n)
{
    // Complete the function
    int t1=0;
    int t2=n-1;
    while(t1!=t2)
    {
        if(arr[t1]>arr[t2])
            t1++;
        else
            t2--;
    }
    return arr[t1];
}
