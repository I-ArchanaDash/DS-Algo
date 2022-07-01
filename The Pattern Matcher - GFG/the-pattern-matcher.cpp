// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void follPatt(string s)
    {
       //Your code here
       int n=s.length();
       int flag=1;
       int count=0;
       int i=0;
       while(i<n)
       {
           while(s[i]=='x')
            {
                count++;
                i++;
            }
           while(s[i]=='y')
           {
               count--;
               i++;
           }
           if(count!=0)
                flag=0;
       }

        cout<<flag<<endl;
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    Solution obj;
	    //function call
	    obj.follPatt(s);
	   
	}
	return 0;
}  // } Driver Code Ends