// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> ans;
    void TOH(int &n,int N,int beg,int aux,int end)
    {
        if(N==0 || n==0) return;
        if(N==1)
        {
            n--;
            if(n==0)
            {
                ans.push_back(beg);
                ans.push_back(end);
            }
            return;
        }
        TOH(n,N-1,beg,end,aux);
        TOH(n,1,beg,aux,end);
        TOH(n,N-1,aux,beg,end);
        
    }
    vector<int> shiftPile(int N, int n){
        // code here
        TOH(n,N,1,2,3);
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends